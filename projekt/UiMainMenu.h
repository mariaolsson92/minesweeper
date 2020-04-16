/********************************************************************************
** Form generated from reading UI file 'UiMainMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UIMAINMENU_H
#define UIMAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIMainMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QLabel *menuLabel;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *startPushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *exitPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UIMainMenu)
    {
        if (UIMainMenu->objectName().isEmpty())
            UIMainMenu->setObjectName(QStringLiteral("UIMainMenu"));
        UIMainMenu->resize(240, 320);
        UIMainMenu->setMinimumSize(QSize(240, 320));
        verticalLayout_2 = new QVBoxLayout(UIMainMenu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(UIMainMenu);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setStyleSheet(QLatin1String(".QSplitter {\n"
"background-color: #9FD1DE;\n"
"border: 2px solid #5693a1;\n"
"}"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(0);
        menuLabel = new QLabel(splitter);
        menuLabel->setObjectName(QStringLiteral("menuLabel"));
        menuLabel->setMinimumSize(QSize(0, 0));
        menuLabel->setMaximumSize(QSize(16777215, 168));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(21);
        font.setBold(true);
        font.setWeight(75);
        menuLabel->setFont(font);
        menuLabel->setStyleSheet(QStringLiteral("color: #5a8691;"));
        menuLabel->setAlignment(Qt::AlignCenter);
        splitter->addWidget(menuLabel);
        verticalFrame = new QFrame(splitter);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setMaximumSize(QSize(16777215, 148));
        verticalFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        startPushButton = new QPushButton(verticalFrame);
        startPushButton->setObjectName(QStringLiteral("startPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startPushButton->sizePolicy().hasHeightForWidth());
        startPushButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        startPushButton->setFont(font1);
        startPushButton->setStyleSheet(QStringLiteral("background-color: #b89180;"));

        verticalLayout->addWidget(startPushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        exitPushButton = new QPushButton(verticalFrame);
        exitPushButton->setObjectName(QStringLiteral("exitPushButton"));
        exitPushButton->setFont(font1);
        exitPushButton->setStyleSheet(QStringLiteral("background-color: #b89180;"));

        verticalLayout->addWidget(exitPushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(verticalFrame);

        verticalLayout_2->addWidget(splitter, 0, Qt::AlignVCenter);


        retranslateUi(UIMainMenu);

        QMetaObject::connectSlotsByName(UIMainMenu);
    } // setupUi

    void retranslateUi(QWidget *UIMainMenu)
    {
        UIMainMenu->setWindowTitle(QApplication::translate("UIMainMenu", "Minesweeper", Q_NULLPTR));
        menuLabel->setText(QApplication::translate("UIMainMenu", "Minesweeper", Q_NULLPTR));
        startPushButton->setText(QApplication::translate("UIMainMenu", "Start", Q_NULLPTR));
        exitPushButton->setText(QApplication::translate("UIMainMenu", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UIMainMenu: public Ui_UIMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UIMAINMENU_H
