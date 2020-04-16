
//
// Created by Maria Olsson on 2019-12-22.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#include "LevelMenu.h"

LevelMenu::LevelMenu(QWidget *parent) :
    QWidget(parent)
{
    uiLevelMenu = new Ui::UILevelMenu;
    uiLevelMenu->setupUi(this);
    connect(uiLevelMenu->easyPushButton, &QPushButton::clicked, this, &LevelMenu::handleEasyButton);
    connect(uiLevelMenu->mediumPushButton, &QPushButton::clicked, this, &LevelMenu::handleMediumButton);
    connect(uiLevelMenu->hardPushButton, &QPushButton::clicked, this, &LevelMenu::handleHardButton);
}

void LevelMenu::handleEasyButton() {
    emit startGame(static_cast<size_t>(Easy::rows), static_cast<size_t>(Easy::columns), static_cast<size_t>(Easy::mines));
}

void LevelMenu::handleMediumButton() {
    emit startGame(static_cast<size_t>(Medium::rows), static_cast<size_t>(Medium::columns), static_cast<size_t>(Medium::mines));
}

void LevelMenu::handleHardButton() {
    emit startGame(static_cast<size_t>(Hard::rows), static_cast<size_t>(Hard::columns), static_cast<size_t>(Hard::mines));
}