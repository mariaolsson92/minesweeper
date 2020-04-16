
//
// Created by Maria Olsson on 2019-12-25.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#include <iostream>
#include "Square.h"

Square::Square(QWidget *parent, size_t height, size_t width) :
        QPushButton(parent), height(height), width(width), visited(false), clickable(true)
{
    setStyleSheet(styleSheet().append(squareStyles.initialStyle));
    setCheckable(true);
    setFixedSize(width, height);
}

void Square::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        emit clicked();
    } else if (event->button() == Qt::RightButton) {
        emit rightClicked();
    }
}

bool Square::getVisited() const {
    return visited;
}

void Square::setVisited(bool _visited) {
    visited = _visited;
}

void Square::setClickable(bool _clickable) {
    clickable = _clickable;
}

bool Square::getClickable() const {
    return clickable;
}

void Square::setFlaggedState() {
    setIcon(QIcon(flagIconPath));
    setIconSize(QSize(width - margin, height - margin));
    setClickable(false);
    setCheckable(false);
}

void Square::unsetFlaggedState() {
    setIcon(QIcon());
    setClickable(true);
    setCheckable(true);
}

void Square::setClearedState() {
    setStyleSheet(styleSheet().append(squareStyles.clearedStyle));
    setChecked(true);
    setClickable(false);
}

void Square::setMineState() {
    setIcon(QIcon(mineIconPath));
    setIconSize(QSize(width, height));
}

void Square::setNeighbourCount(int neighbouringMineCount) {
    setText(QString::number(neighbouringMineCount));
    setStyleSheet(styleSheet().append(squareStyles.neighbourCountTextStyle));

    switch(neighbouringMineCount) {
        case 1:
            setStyleSheet(styleSheet().append(squareStyles.oneNeighbourStyle));
            break;
        case 2:
            setStyleSheet(styleSheet().append(squareStyles.twoNeighboursStyle));
            break;
        case 3:
            setStyleSheet(styleSheet().append(squareStyles.threeNeighboursStyle));
            break;
        case 4:
            setStyleSheet(styleSheet().append(squareStyles.fourNeighboursStyle));
            break;
        case 5:
            setStyleSheet(styleSheet().append(squareStyles.fiveNeighboursStyle));
            break;
        case 6:
            setStyleSheet(styleSheet().append(squareStyles.sixNeighboursStyle));
            break;
        case 7:
            setStyleSheet(styleSheet().append(squareStyles.sevenNeighboursStyle));
            break;
        case 8:
            setStyleSheet(styleSheet().append(squareStyles.eightNeighboursStyle));
            break;
        default:
            break;
    }
}