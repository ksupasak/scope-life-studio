/********************************************************************************
** Form generated from reading UI file 'stationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATIONWINDOW_H
#define UI_STATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "webcontroller.h"

QT_BEGIN_NAMESPACE

class Ui_StationWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    WebController *web;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StationWindow)
    {
        if (StationWindow->objectName().isEmpty())
            StationWindow->setObjectName(QString::fromUtf8("StationWindow"));
        StationWindow->resize(800, 600);
        centralwidget = new QWidget(StationWindow);
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

        StationWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StationWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        StationWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StationWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        StationWindow->setStatusBar(statusbar);

        retranslateUi(StationWindow);

        QMetaObject::connectSlotsByName(StationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StationWindow)
    {
        StationWindow->setWindowTitle(QCoreApplication::translate("StationWindow", "StationWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StationWindow: public Ui_StationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATIONWINDOW_H
