
//
// Created by Maria Olsson on 2019-12-19.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#ifndef PROJEKT_MAINMENU_H
#define PROJEKT_MAINMENU_H

#include "UiMainMenu.h"

/**
 * A menu where the player
 * can choose to either start
 * or exit the game.
 */
class MainMenu : public QWidget {
    Q_OBJECT

public slots:
    /**
     * @brief
     * Emits a signal that the start button was clicked.
     */
    void handleStartButton();

    /**
     * @Exits the game.
     */
    void handleExitButton();

signals:
    void startButtonClicked();

public:
    explicit MainMenu(QWidget *parent);

private:
    Ui::UIMainMenu *uiMainMenu;
};


#endif //PROJEKT_MAINMENU_H
