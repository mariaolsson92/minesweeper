
//
// Created by Maria Olsson on 2020-01-09.
// Copyright (c) 2020 Mittuniversitetet. All rights reserved.
//

#ifndef PROJEKT_PAGEMANAGER_H
#define PROJEKT_PAGEMANAGER_H

#include <QtCore/QtCore>
#include "MainMenu.h"
#include "LevelMenu.h"
#include "Gameboard.h"
#include "MainWindow.h"

/**
 * The page manager handles
 * communication between the main window
 * and the different pages of the game.
 */
class PageManager : public QWidget {
public:
    PageManager(QWidget *parent, MainWindow *mainWindow);

public slots:
    /**
     * @brief
     * Tells the main window to show the
     * level menu.
     */
    void showLevelMenu();

    /**
     * @brief
     * Tells the main window to show the
     * main menu.
     */
    void showMainMenu();

    /**
     * @brief
     * Constructs a gameboard with given parameters
     * and connects to the signal the gameboard emits.
     * Tells the main window to add the gameboard page
     * and show it.
     * @param rows the amount of rows the gameboard will have.
     * @param columns the amount of columns the gameboard will have.
     * @param mineCount the amount of mines the gameboard will have.
     */
    void startGame(size_t rows, size_t columns, size_t mineCount);

    /**
     * @brief
     * Tells the main window to remove and delete the
     * previous gameboard before creating a new gameboard.
     */
    void restartGame(Gameboard *gameboard, size_t rows, size_t columns, size_t mineCount);

    /**
     * @brief
     * Tells the main window to remove and delete the
     * previous gameboard before returning to the main menu.
     * @param gameboard
     */
    void dontRestartGame(Gameboard *gameboard);

private:
    MainWindow *mainWindow;
    MainMenu *mainMenu;
    LevelMenu *levelMenu;
};

#endif //PROJEKT_PAGEMANAGER_H
