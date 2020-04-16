
//
// Created by Maria Olsson on 2019-12-22.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#ifndef PROJEKT_GAMEBOARD_H
#define PROJEKT_GAMEBOARD_H

#include "UiGameboard.h"
#include "GameGenerator.h"
#include "Square.h"

/**
 * Represents the gameboard of the minesweeper game.
 * Handles clicks on the gameboard squares and controls
 * their states. A square on the gameboard can be either
 * a mine, have adjacent mines or not have any adjacent mines.
 */
class Gameboard : public QWidget {

Q_OBJECT

public slots:
    /**
     * @brief
     * Flags or unflags the square that was clicked
     * depending on its previous state. Checks if
     * the win condition was met.
     * @param yCoord the y coordinate of the square
     * @param xCoord the x coordinate of the square
     */
    void handleLeftButtonClick(size_t yCoord, size_t xCoord);

    /**
     * @brief
     * Checks if the clicked on square was a mine,
     * if it had any neighbouring mines or if it
     * was an empty square.
     * @param yCoord the y coordinate of the square
     * @param xCoord the x coordinate of the square
     */
    void handleRightButtonClick(size_t yCoord, size_t xCoord);

signals:
    void escapePressed(Gameboard *gameboard);
    void restartGame(Gameboard *gameboard, size_t rows, size_t columns, size_t mineCount);
    void dontRestartGame(Gameboard *gameboard);

public:
    /**
     * @brief
     * Constructs a gameboard with given dimensions.
     * @param parent the owner of the gameboard.
     * @param rows amount of rows in the gameboard.
     * @param columns amount of columns in the gameboard.
     * @param mineCount amount of mines on the gameboard.
     */
    Gameboard(QWidget *parent, size_t rows, size_t columns, size_t mineCount);

protected:
    /**
     * Listens for key press events, if the
     * escape key was pressed a signal to leave
     * the gameboard is emitted.
     * @param event the key press event that occured
     */
    void keyPressEvent(QKeyEvent* event);

private:

    /**
     * @brief
     * Fills the gameboard with a two-dimensional vector of squares.
     */
    void fillGameboard();

    /**
     * @brief
     * Reveals nearby squares that do not have any adjacent mines.
     * Calls itself recursively for each of the 8 surrounding positions of
     * a given square. Returns when it reaches squares that are either mines,
     * have adjacent mines or are flagged.
     * @param yCoord the y coordinate of the current square
     * @param xCoord the x coordinate of the current square
     */
    void clearNeighbouringSquares(size_t yCoord, size_t xCoord) const;

    /**
     * @brief
     * Exposes all mines on the gameboard.
     */
    void exposeMines() const;

    /**
     * @brief
     * Checks is the structure containing flag positions is
     * equal in size and a permutation of the structure
     * containing mine positions.
     * This is regarded as the win condition.
     * @return whether the win condition is met.
     */
    bool gameWon() const;

    /**
     * @brief
     * Shows a pop-up window notifying the player that they
     * either won or lost and emits a signal to either restart the
     * game or not based on which button is clicked.
     * @param gameEndedString is used to show whether the player lost or won.
     */
    void endGame(std::string gameEndedString);

    /**
     * @brief
     * Marks all squares on the gameboard as not visited.
     * Whether a square is visited is relevant when
     * clearing empty squares to avoid infinite
     * recursion.
     */
    void unvisitAllSquares() const;

    /**
     * @brief
     * Checks whether a square contains a mine.
     * @param yCoord the y-coordinate of the square
     * @param xCoord the x-coordinate of the square
     * @return whether the square contains a mine or not
     */
    bool isMine(size_t yCoord, size_t xCoord) const;

    /**
     * @brief
     * Calculates, for a given square, the number of mines in the eight neighbouring squares
     * and stores that value in the corresponding position.
     * @param yCoord the y-coordinate of the square
     * @param xCoord the x-coordinate of the square
     * @return the amount of neighbouring mines
     */
    size_t calculateAdjacentMines(size_t yCoord, size_t xCoord) const;

    /**
     * @brief
     * Checks if a square with a location that is relative to another square
     * is within bounds of the game board.
     * @param xCoord the x coordinate of the square
     * @param yCoord the y coordinate of the square
     * @param xOffset the offset on the x axis
     * @param yOffset the offset on the y axis
     * @return whether the neighbour is within bounds
     */
    bool isWithinBounds(size_t xCoord, size_t yCoord, int xOffset, int yOffset) const;

    Ui::UIGameboard *uiGameboard;
    GameGenerator gameGenerator;
    std::vector<std::vector<Square*>> squareMatrix;
    size_t rows;
    size_t columns;
    size_t mineCount;
    size_t maxFlagAmount;
    std::set<std::pair<size_t, size_t>> flagPositions;
};


#endif //PROJEKT_GAMEBOARD_H
