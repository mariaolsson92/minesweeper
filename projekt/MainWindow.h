
//
// Created by Maria Olsson on 2019-12-19.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#ifndef PROJEKT_MAINWINDOW_H
#define PROJEKT_MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>

/**
 * The main window adds, shows and
 * removes pages.
 */
class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

    /**
     * @brief
     * Adds a page to the QStackedWidget.
     * @param page the page that should be added.
     */
    void addApplicationPage(QWidget* page) const;

    /**
     * @brief
     * Shows a page from the QStackedWidget.
     * @param page the page that should be shown.
     */
    void showApplicationPage(QWidget* page) const;

    /**
     * @brief
     * Removes a page from the QStackedWidget and
     * deletes it.
     * @param page the page that should be removed.
     */
    void removeApplicationPage(QWidget* page);

private:
    QStackedWidget *applicationPages;
    const QString backgroundFilePath = "MainWindow { background-image: url(/home/maria/studier/three/git/programmeringsmetodik/projekt/assets/background_image1.jpg); }";
};


#endif //PROJEKT_MAINWINDOW_H
