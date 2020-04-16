cmake_minimum_required(VERSION 3.15)
project(projekt)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

add_executable(projekt main.cpp GameGenerator.cpp GameGenerator.h MainWindow.cpp MainWindow.h MainMenu.cpp MainMenu.h LevelMenu.cpp LevelMenu.h Gameboard.cpp Gameboard.h Square.cpp Square.h PageManager.cpp PageManager.h)

target_link_libraries(projekt Qt5::Core Qt5::Widgets Qt5::Gui)