
//
// Created by Maria Olsson on 2019-12-25.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#ifndef PROJEKT_SQUARE_H
#define PROJEKT_SQUARE_H


#include <QtWidgets/QPushButton>
#include <QMouseEvent>

/**
 * Represents a square on the gameboard.
 * Handles the different states a square can be in
 * depending on player interactions.
 */
class Square : public QPushButton {
Q_OBJECT

public:
    Square(QWidget *parent, size_t height, size_t width);

    void setVisited(bool _visited);
    bool getVisited() const;
    void setClickable(bool _enabled);
    bool getClickable() const;

    /**
     * @brief
     * Marks the square as flagged by changing its
     * colour, making it not clickable and making it
     * not checkable.
     */
    void setFlaggedState();

    /**
     * @brief
     * Marks the square as not flagged by changing
     * its background colour, making it clickable
     * and making it checkable.
     */
    void unsetFlaggedState();

    /**
     * @brief
     * Marks the square as cleared by changing its background
     * colour, making it not clickable and marking it as
     * checked.
     */
    void setClearedState();

    /**
     * @brief
     * Marks the square as a mine by changing its
     * background colour.
     */
    void setMineState();


    /**
     * @brief
     * Sets the text and colour of the square to indicate the
     * number of neighbouring mines.
     * @param neighbouringMineCount the number of neighbouring mines
     */
    void setNeighbourCount(int neighbouringMineCount);

signals:
    void rightClicked();

protected:
    void mousePressEvent(QMouseEvent *event) override;

private:

    /**
     * @brief
     * Defines style sheets for square states.
     */
    struct SquareStyles {
        QString initialStyle = "Square { border:0.5px solid #435B5B; background-color: #C9E6F0; }";
        QString clearedStyle = "Square { background-color: #B4C5CA; }";
        QString neighbourCountTextStyle = "Square { font: verdana; font-weight: bold; }";
        QString oneNeighbourStyle = "Square { color: #0000E0; }";
        QString twoNeighboursStyle = "Square { color: #008500; }";
        QString threeNeighboursStyle = "Square { color: #D10000; }";
        QString fourNeighboursStyle = "Square { color: #8100B8; }";
        QString fiveNeighboursStyle = "Square { color: #949400; }";
        QString sixNeighboursStyle = "Square { color: #4B0082; }";
        QString sevenNeighboursStyle = "Square { color: #CC6600; }";
        QString eightNeighboursStyle = "Square { color: #000000; }";
    };

    bool visited;
    bool clickable;
    size_t width;
    size_t height;
    const int margin = 10;
    const QString flagIconPath = "/home/maria/studier/three/git/programmeringsmetodik/projekt/assets/flag";
    const QString mineIconPath = "/home/maria/studier/three/git/programmeringsmetodik/projekt/assets/mine";
    SquareStyles squareStyles;
};


#endif //PROJEKT_SQUARE_H
