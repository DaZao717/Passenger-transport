/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_R;
    QAction *action_S;
    QAction *action_J;
    QAction *action_M;
    QAction *action_H;
    QAction *action_N;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *refreshButton;
    QPushButton *addButton;
    QPushButton *delButton;
    QPushButton *changeButton;
    QPushButton *searchButton;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_D;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 612);
        action_R = new QAction(MainWindow);
        action_R->setObjectName(QString::fromUtf8("action_R"));
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        action_J = new QAction(MainWindow);
        action_J->setObjectName(QString::fromUtf8("action_J"));
        action_M = new QAction(MainWindow);
        action_M->setObjectName(QString::fromUtf8("action_M"));
        action_H = new QAction(MainWindow);
        action_H->setObjectName(QString::fromUtf8("action_H"));
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QString::fromUtf8("action_N"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 60, 761, 481));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 11, 761, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        refreshButton = new QPushButton(layoutWidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setMinimumSize(QSize(70, 30));

        horizontalLayout->addWidget(refreshButton);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(70, 30));

        horizontalLayout->addWidget(addButton);

        delButton = new QPushButton(layoutWidget);
        delButton->setObjectName(QString::fromUtf8("delButton"));
        delButton->setMinimumSize(QSize(70, 30));

        horizontalLayout->addWidget(delButton);

        changeButton = new QPushButton(layoutWidget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setMinimumSize(QSize(70, 30));

        horizontalLayout->addWidget(changeButton);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setMinimumSize(QSize(70, 30));

        horizontalLayout->addWidget(searchButton);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(70, 30));

        horizontalLayout->addWidget(pushButton_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_D = new QMenu(menubar);
        menu_D->setObjectName(QString::fromUtf8("menu_D"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_D->menuAction());
        menu_F->addAction(action_R);
        menu_F->addAction(action_S);
        menu_D->addAction(action_J);
        menu_D->addAction(action_M);
        menu_D->addAction(action_H);
        menu_D->addAction(action_N);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_R->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226(&R)", nullptr));
        action_S->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
        action_J->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251(&J)", nullptr));
        action_M->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251(&M)", nullptr));
        action_H->setText(QCoreApplication::translate("MainWindow", "\345\220\216\345\244\251(&H)", nullptr));
        action_N->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        delButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\346\227\205\345\256\242\347\231\273\350\256\260\350\241\250", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_D->setTitle(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237(&D)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
