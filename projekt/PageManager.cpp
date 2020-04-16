
//
// Created by Maria Olsson on 2020-01-09.
// Copyright (c) 2020 Mittuniversitetet. All rights reserved.
//

#include <QtWidgets/QMessageBox>
#include <iostream>
#include "PageManager.h"

PageManager::PageManager(QWidget *parent, MainWindow *mainWindow) :
        QWidget(parent), mainWindow(mainWindow), mainMenu(new MainMenu(this)),
        levelMenu(new LevelMenu(this))
{
    connect(mainMenu, &MainMenu::startButtonClicked, this, &PageManager::showLevelMenu);
    connect(levelMenu, &LevelMenu::startGame, this, &PageManager::startGame);
    mainWindow->addApplicationPage(mainMenu);
    mainWindow->addApplicationPage(levelMenu);
    showMainMenu();
}

void PageManager::showMainMenu() {
    mainWindow->showApplicationPage(mainMenu);
}

void PageManager::showLevelMenu() {
    mainWindow->showApplicationPage(levelMenu);
}

void PageManager::startGame(size_t rows, size_t columns, size_t mineCount) {
    Gameboard *gameboard = new Gameboard(this, rows, columns, mineCount);
    connect(gameboard, &Gameboard::escapePressed, this, &PageManager::dontRestartGame);
    connect(gameboard, &Gameboard::restartGame, this, &PageManager::restartGame);
    connect(gameboard, &Gameboard::dontRestartGame, this, &PageManager::dontRestartGame);
    mainWindow->addApplicationPage(gameboard);
    mainWindow->showApplicationPage(gameboard);
}

void PageManager::restartGame(Gameboard *gameboard, size_t rows, size_t columns, size_t mineCount) {
    mainWindow->removeApplicationPage(gameboard);
    startGame(rows, columns, mineCount);
}

void PageManager::dontRestartGame(Gameboard *gameboard) {
    mainWindow->removeApplicationPage(gameboard);
    mainWindow->showApplicationPage(mainMenu);
}
