/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "webcontroller.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStation_Window;
    QAction *actionDVR_Window;
    QAction *actionTele_Window;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    WebController *web;
    QWidget *page_2;
    QMenuBar *menubar;
    QMenu *menuStation;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        actionStation_Window = new QAction(MainWindow);
        actionStation_Window->setObjectName(QString::fromUtf8("actionStation_Window"));
        actionDVR_Window = new QAction(MainWindow);
        actionDVR_Window->setObjectName(QString::fromUtf8("actionDVR_Window"));
        actionTele_Window = new QAction(MainWindow);
        actionTele_Window->setObjectName(QString::fromUtf8("actionTele_Window"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        web = new WebController(page);
        web->setObjectName(QString::fromUtf8("web"));

        horizontalLayout_2->addWidget(web);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        menuStation = new QMenu(menubar);
        menuStation->setObjectName(QString::fromUtf8("menuStation"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuStation->menuAction());
        menuStation->addAction(actionStation_Window);
        menuStation->addAction(actionDVR_Window);
        menuStation->addAction(actionTele_Window);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionStation_Window->setText(QCoreApplication::translate("MainWindow", "Station Window", nullptr));
        actionDVR_Window->setText(QCoreApplication::translate("MainWindow", "DVR Window", nullptr));
        actionTele_Window->setText(QCoreApplication::translate("MainWindow", "Tele Window", nullptr));
        menuStation->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
