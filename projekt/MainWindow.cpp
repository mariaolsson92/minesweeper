
//
// Created by Maria Olsson on 2019-12-19.
// Copyright (c) 2019 Mittuniversitetet. All rights reserved.
//

#include <QtWidgets/QStackedLayout>
#include <iostream>
#include "MainWindow.h"
#include "Gameboard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    applicationPages = new QStackedWidget();
    setCentralWidget(applicationPages);
    setStyleSheet(backgroundFilePath);
    showMaximized();
}

void MainWindow::addApplicationPage(QWidget* page) const {
    applicationPages->addWidget(page);
}

void MainWindow::showApplicationPage(QWidget* page) const {
    applicationPages->setCurrentWidget(page);
}

void MainWindow::removeApplicationPage(QWidget* page) {
    applicationPages->removeWidget(page);
    page->deleteLater();
}
