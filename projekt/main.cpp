#include <QtWidgets/QApplication>
#include "GameGenerator.h"
#include "MainWindow.h"
#include "MainMenu.h"
#include "LevelMenu.h"
#include "Gameboard.h"
#include "PageManager.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow *mainWindow = new MainWindow(nullptr);
    PageManager *pageManager = new PageManager(nullptr, mainWindow);

    mainWindow->show();

    return app.exec();
}
