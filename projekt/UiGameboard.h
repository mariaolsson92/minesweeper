/********************************************************************************
** Form generated from reading UI file 'UiGameboard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIGAMEBOARD_H
#define UIGAMEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIGameboard
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *UIGameboard)
    {
        if (UIGameboard->objectName().isEmpty())
            UIGameboard->setObjectName(QStringLiteral("UIGameboard"));
        UIGameboard->resize(240, 320);
        gridLayoutWidget = new QWidget(UIGameboard);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(19, 19, 201, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(UIGameboard);

        QMetaObject::connectSlotsByName(UIGameboard);
    } // setupUi

    void retranslateUi(QWidget *UIGameboard)
    {
        UIGameboard->setWindowTitle(QApplication::translate("UIGameboard", "Minesweeper", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UIGameboard: public Ui_UIGameboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIGAMEBOARD_H
