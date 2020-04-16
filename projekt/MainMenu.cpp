
//
// Created by Maria Olsson on 2019-12-19.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#include "MainMenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent)
{
    uiMainMenu = new Ui::UIMainMenu;
    uiMainMenu->setupUi(this);
    connect(uiMainMenu->startPushButton, &QPushButton::clicked, this, &MainMenu::handleStartButton);
    connect(uiMainMenu->exitPushButton, &QPushButton::clicked, this, &MainMenu::handleExitButton);
}

void MainMenu::handleStartButton() {
    emit startButtonClicked();
}

void MainMenu::handleExitButton() {
    QApplication::quit();
}
