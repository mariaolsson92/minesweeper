
//
// Created by Maria Olsson on 2019-12-22.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#include <iostream>
#include <QtWidgets/QMessageBox>
#include "Gameboard.h"

void Gameboard::handleRightButtonClick(size_t yCoord, size_t xCoord) {
    Square *square = squareMatrix[yCoord][xCoord];
    std::pair<size_t, size_t> flagPos = std::make_pair(xCoord, yCoord);

    if (square->getClickable() && flagPositions.size() < maxFlagAmount) {
        flagPositions.emplace(flagPos);
        square->setFlaggedState();
    } else if (!square->getClickable() && !square->isChecked()) {
        flagPositions.erase(flagPos);
        square->unsetFlaggedState();
    }

    if(gameWon()) {
        std::string gameEndedString = "You won!";
        endGame(gameEndedString);
    }
}

void Gameboard::handleLeftButtonClick(size_t yCoord, size_t xCoord) {
    Square *square = squareMatrix[yCoord][xCoord];

    if (square->getClickable()) {
        if (isMine(yCoord, xCoord)) {
            exposeMines();
            std::string gameEndedString = "You lost.";
            endGame(gameEndedString);
        } else {
            size_t neighbouringMineCount = calculateAdjacentMines(yCoord, xCoord);
            if (neighbouringMineCount > 0) {
                square->setNeighbourCount(neighbouringMineCount);
                square->setClearedState();
            } else {
                unvisitAllSquares();
                clearNeighbouringSquares(yCoord, xCoord);
            }
        }
    }
}

void Gameboard::unvisitAllSquares() const {
    for (auto &row : squareMatrix) {
        for (auto &square : row) {
            square->setVisited(false);
        }
    }
}

void Gameboard::clearNeighbouringSquares(size_t yCoord, size_t xCoord) const {
    if (!isWithinBounds(xCoord, yCoord, 0, 0)) { return; }

    Square *square = squareMatrix[yCoord][xCoord];

    if (square->getVisited()) {
        return;
    }

    square->setVisited(true);

    if (isMine(yCoord, xCoord) || !(square->getClickable())) {
        return;
    }

    square->setClearedState();

    size_t neighbouringMineCount = calculateAdjacentMines(yCoord, xCoord);
    if (neighbouringMineCount > 0) {
        square->setNeighbourCount(neighbouringMineCount);
        return;
    }

    clearNeighbouringSquares(yCoord - 1, xCoord - 1);
    clearNeighbouringSquares(yCoord - 1, xCoord);
    clearNeighbouringSquares(yCoord - 1, xCoord + 1);
    clearNeighbouringSquares(yCoord, xCoord - 1);
    clearNeighbouringSquares(yCoord, xCoord + 1);
    clearNeighbouringSquares(yCoord + 1, xCoord - 1);
    clearNeighbouringSquares(yCoord + 1, xCoord);
    clearNeighbouringSquares(yCoord + 1, xCoord + 1);
}

void Gameboard::keyPressEvent(QKeyEvent* event) {
    if (event->key() == Qt::Key_Escape) {
        emit(escapePressed(this));
    }
}

bool Gameboard::gameWon() const {
    if (flagPositions.size() == maxFlagAmount) {
        return  (std::is_permutation(flagPositions.begin(), flagPositions.end(), gameGenerator.getMinePositions().begin()));
    }
    return false;
}

void Gameboard::exposeMines() const {
    std::set<std::pair<size_t, size_t>> minePositions = gameGenerator.getMinePositions();

    std::for_each(minePositions.begin(), minePositions.end(), [this](std::pair<size_t, size_t> minePosition) {
        size_t xCoord = minePosition.first;
        size_t yCoord = minePosition.second;
            squareMatrix[yCoord][xCoord]->setMineState();
    });
}

Gameboard::Gameboard(QWidget *parent, size_t rows, size_t columns, size_t mineCount) :
        QWidget(parent), rows(rows), columns(columns), mineCount(mineCount), maxFlagAmount(mineCount)
{
    gameGenerator.randomizeMinePositions(rows, columns, mineCount);
    uiGameboard = new Ui::UIGameboard;
    uiGameboard->setupUi(this);
    fillGameboard();
}

void Gameboard::fillGameboard() {
    size_t squareWidth = 30;
    size_t squareHeight = 30;
    std::vector<Square *> squareRow;

    for (size_t yCoord = 0; yCoord < rows; yCoord++) {
        for (size_t xCoord = 0; xCoord < columns; xCoord++) {
            Square *square = new Square(this, squareHeight, squareWidth);
            uiGameboard->gridLayout->addWidget(square, yCoord, xCoord);
            squareRow.push_back(square);

            connect(square, &Square::clicked, this, [this, yCoord, xCoord]() {
                handleLeftButtonClick(yCoord, xCoord);
            });
            connect(square, &Square::rightClicked, this, [this, yCoord, xCoord]() {
                handleRightButtonClick(yCoord, xCoord);
            });
        }
        squareMatrix.push_back(squareRow);
        squareRow.clear();
    }

    uiGameboard->gridLayout->setAlignment(Qt::AlignCenter);
    setLayout(uiGameboard->gridLayout);
}

bool Gameboard::isMine(size_t yCoord, size_t xCoord) const {
    std::set<std::pair<size_t, size_t>> minePositions = gameGenerator.getMinePositions();

    return (std::find(minePositions.begin(), minePositions.end(), std::make_pair(xCoord, yCoord)) !=
            minePositions.end());
}

size_t Gameboard::calculateAdjacentMines(size_t yCoord, size_t xCoord) const {
    size_t neighbouringMineCount = 0;
    const std::array<std::array<int, 2>, 8> neighbourOffsets = {{{-1, -1}, {0, -1}, {1, -1}, {-1, 0}, {1, 0}, {-1, 1}, {0, 1}, {1, 1}}};
    std::set<std::pair<size_t, size_t>> minePositions = gameGenerator.getMinePositions();

    for (auto neighbour : neighbourOffsets) {
        int xCoordOffset = neighbour[0];
        int yCoordOffset = neighbour[1];
        if (isWithinBounds(xCoord, yCoord, xCoordOffset, yCoordOffset)) {
            std::pair<size_t, size_t> neighbourPos = std::make_pair(xCoord + xCoordOffset, yCoord + yCoordOffset);
            if (std::find(minePositions.begin(), minePositions.end(), neighbourPos) != minePositions.end()) {
                neighbouringMineCount++;
            }
        }
    }
    return neighbouringMineCount;
}

bool Gameboard::isWithinBounds(size_t xCoord, size_t yCoord, int xOffset, int yOffset) const {
    return (xCoord + xOffset >= 0 && yCoord + yOffset >= 0 && xCoord + xOffset < columns &&
            yCoord + yOffset < rows);
}

void Gameboard::endGame(std::string gameEndedString) {
    QMessageBox messageBox;
    messageBox.setText(QString::fromStdString(gameEndedString));
    QPushButton *tryAgainButton = messageBox.addButton(tr("Try again"), QMessageBox::ActionRole);
    messageBox.addButton(tr("Back"), QMessageBox::ActionRole);

    messageBox.exec();

    if (messageBox.clickedButton() == tryAgainButton) { emit restartGame(this, rows, columns, mineCount); }
    else { emit dontRestartGame(this); }
}