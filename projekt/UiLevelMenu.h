/********************************************************************************
** Form generated from reading UI file 'UiLevelMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UILEVELMENU_H
#define UILEVELMENU_H

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

class Ui_UILevelMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QLabel *levelLabel;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *easyPushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *mediumPushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *hardPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UILevelMenu)
    {
        if (UILevelMenu->objectName().isEmpty())
            UILevelMenu->setObjectName(QStringLiteral("UILevelMenu"));
        UILevelMenu->resize(240, 320);
        UILevelMenu->setMinimumSize(QSize(240, 320));
        verticalLayout_2 = new QVBoxLayout(UILevelMenu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(UILevelMenu);
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
        levelLabel = new QLabel(splitter);
        levelLabel->setObjectName(QStringLiteral("levelLabel"));
        levelLabel->setMinimumSize(QSize(0, 0));
        levelLabel->setMaximumSize(QSize(16777215, 168));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(21);
        font.setBold(true);
        font.setWeight(75);
        levelLabel->setFont(font);
        levelLabel->setStyleSheet(QStringLiteral("color: #5a8691;"));
        levelLabel->setAlignment(Qt::AlignCenter);
        splitter->addWidget(levelLabel);
        verticalFrame = new QFrame(splitter);
        verticalFrame->setObjectName(QStringLiteral("verticalFrame"));
        verticalFrame->setMaximumSize(QSize(16777215, 148));
        verticalFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        easyPushButton = new QPushButton(verticalFrame);
        easyPushButton->setObjectName(QStringLiteral("easyPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(easyPushButton->sizePolicy().hasHeightForWidth());
        easyPushButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        easyPushButton->setFont(font1);
        easyPushButton->setStyleSheet(QStringLiteral("background-color: #b89180;"));

        verticalLayout->addWidget(easyPushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        mediumPushButton = new QPushButton(verticalFrame);
        mediumPushButton->setObjectName(QStringLiteral("mediumPushButton"));
        mediumPushButton->setFont(font1);
        mediumPushButton->setStyleSheet(QStringLiteral("background-color: #b89180;"));

        verticalLayout->addWidget(mediumPushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        hardPushButton = new QPushButton(verticalFrame);
        hardPushButton->setObjectName(QStringLiteral("hardPushButton"));
        hardPushButton->setFont(font1);
        hardPushButton->setStyleSheet(QStringLiteral("background-color: #b89180;"));

        verticalLayout->addWidget(hardPushButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(verticalFrame);

        verticalLayout_2->addWidget(splitter, 0, Qt::AlignVCenter);


        retranslateUi(UILevelMenu);

        QMetaObject::connectSlotsByName(UILevelMenu);
    } // setupUi

    void retranslateUi(QWidget *UILevelMenu)
    {
        UILevelMenu->setWindowTitle(QApplication::translate("UILevelMenu", "Minesweeper", Q_NULLPTR));
        levelLabel->setText(QApplication::translate("UILevelMenu", "Choose level", Q_NULLPTR));
        easyPushButton->setText(QApplication::translate("UILevelMenu", "Easy", Q_NULLPTR));
        mediumPushButton->setText(QApplication::translate("UILevelMenu", "Medium", Q_NULLPTR));
        hardPushButton->setText(QApplication::translate("UILevelMenu", "Hard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UILevelMenu: public Ui_UILevelMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UILEVELMENU_H
