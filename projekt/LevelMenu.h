
//
// Created by Maria Olsson on 2019-12-22.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#ifndef PROJEKT_LEVELMENU_H
#define PROJEKT_LEVELMENU_H


#include <QtCore/QtCore>
#include <QtWidgets/QWidget>
#include "UiLevelMenu.h"

/**
 * A menu where the player chooses
 * difficulty level.
 */
class LevelMenu : public QWidget {
Q_OBJECT

public slots:
    /**
     * @brief
     * Emits a signal that a game should be
     * started with "easy" difficulty.
     */
    void handleEasyButton();

    /**
     * @brief
     * Emits a signal that a game should be
     * started with "medium" difficulty.
     */
    void handleMediumButton();

    /**
     * @brief
     * Emits a signal that a game should be
     * started with "hard" difficulty.
     */
    void handleHardButton();

signals:
    void startGame(int rows, int columns, int mineCount);

public:
    explicit LevelMenu(QWidget *parent);

private:
    Ui::UILevelMenu *uiLevelMenu;

    /**
     * @brief
     * Parameters for "easy" difficulty.
     */
    enum class Easy : size_t {
        rows = 9,
        columns = 9,
        mines = 10
    };

    /**
     * @brief
     * Parameters for "medium" difficulty.
     */
    enum class Medium : size_t {
        rows = 16,
        columns = 16,
        mines = 40
    };

    /**
     * @brief
     * Parameters for "hard" difficulty.
     */
    enum class Hard : size_t {
        rows = 16,
        columns = 30,
        mines = 99
    };
};

#endif //PROJEKT_LEVELMENU_H
