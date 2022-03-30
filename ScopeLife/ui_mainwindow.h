/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <settingcontroller.h>
#include <videocontroller.h>
#include <webcontroller.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCapture;
    QAction *actionRecord;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *title;
    QLabel *clock;
    QStackedWidget *stage;
    QWidget *home_page;
    QVBoxLayout *verticalLayout_2;
    QVideoWidget *live;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QPushButton *setting_btn;
    QPushButton *library_btn;
    QPushButton *start_btn;
    QPushButton *info_btn;
    QSpacerItem *horizontalSpacer_2;
    QWidget *web_page;
    QHBoxLayout *horizontalLayout;
    WebController *web;
    QWidget *capture_page;
    QHBoxLayout *horizontalLayout_2;
    VideoController *video;
    QWidget *setting_page;
    QHBoxLayout *horizontalLayout_5;
    SettingController *setting;
    QMenuBar *menubar;
    QMenu *menuControls;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1319, 778);
        actionCapture = new QAction(MainWindow);
        actionCapture->setObjectName(QString::fromUtf8("actionCapture"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Appr4.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCapture->setIcon(icon);
        actionRecord = new QAction(MainWindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Appr1.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRecord->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 30));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(12, 0, 12, 0);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        title = new QLabel(widget_2);
        title->setObjectName(QString::fromUtf8("title"));
        title->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(title);

        clock = new QLabel(widget_2);
        clock->setObjectName(QString::fromUtf8("clock"));
        clock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(clock);


        verticalLayout->addWidget(widget_2);

        stage = new QStackedWidget(centralwidget);
        stage->setObjectName(QString::fromUtf8("stage"));
        home_page = new QWidget();
        home_page->setObjectName(QString::fromUtf8("home_page"));
        verticalLayout_2 = new QVBoxLayout(home_page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        live = new QVideoWidget(home_page);
        live->setObjectName(QString::fromUtf8("live"));
        live->setMaximumSize(QSize(16777215, 400));
        live->setStyleSheet(QString::fromUtf8("background:rgb(122, 122, 122)"));

        verticalLayout_2->addWidget(live);

        widget_4 = new QWidget(home_page);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 300));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(1024, 0));
        setting_btn = new QPushButton(widget_3);
        setting_btn->setObjectName(QString::fromUtf8("setting_btn"));
        setting_btn->setGeometry(QRect(530, 10, 221, 161));
        QFont font;
        font.setPointSize(16);
        setting_btn->setFont(font);
        library_btn = new QPushButton(widget_3);
        library_btn->setObjectName(QString::fromUtf8("library_btn"));
        library_btn->setEnabled(true);
        library_btn->setGeometry(QRect(790, 10, 221, 161));
        library_btn->setFont(font);
        start_btn = new QPushButton(widget_3);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));
        start_btn->setGeometry(QRect(280, 10, 211, 161));
        start_btn->setFont(font);
        info_btn = new QPushButton(widget_3);
        info_btn->setObjectName(QString::fromUtf8("info_btn"));
        info_btn->setEnabled(false);
        info_btn->setGeometry(QRect(20, 10, 211, 161));
        info_btn->setFont(font);

        horizontalLayout_4->addWidget(widget_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_4);

        stage->addWidget(home_page);
        web_page = new QWidget();
        web_page->setObjectName(QString::fromUtf8("web_page"));
        horizontalLayout = new QHBoxLayout(web_page);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        web = new WebController(web_page);
        web->setObjectName(QString::fromUtf8("web"));

        horizontalLayout->addWidget(web);

        stage->addWidget(web_page);
        capture_page = new QWidget();
        capture_page->setObjectName(QString::fromUtf8("capture_page"));
        horizontalLayout_2 = new QHBoxLayout(capture_page);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        video = new VideoController(capture_page);
        video->setObjectName(QString::fromUtf8("video"));

        horizontalLayout_2->addWidget(video);

        stage->addWidget(capture_page);
        setting_page = new QWidget();
        setting_page->setObjectName(QString::fromUtf8("setting_page"));
        horizontalLayout_5 = new QHBoxLayout(setting_page);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        setting = new SettingController(setting_page);
        setting->setObjectName(QString::fromUtf8("setting"));

        horizontalLayout_5->addWidget(setting);

        stage->addWidget(setting_page);

        verticalLayout->addWidget(stage);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1319, 22));
        menuControls = new QMenu(menubar);
        menuControls->setObjectName(QString::fromUtf8("menuControls"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuControls->menuAction());
        menuControls->addAction(actionCapture);
        menuControls->addAction(actionRecord);
        menuControls->addAction(actionExit);

        retranslateUi(MainWindow);

        stage->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ScopeLife", nullptr));
        actionCapture->setText(QCoreApplication::translate("MainWindow", "Capture", nullptr));
#if QT_CONFIG(shortcut)
        actionCapture->setShortcut(QCoreApplication::translate("MainWindow", "K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecord->setText(QCoreApplication::translate("MainWindow", "Record", nullptr));
#if QT_CONFIG(shortcut)
        actionRecord->setShortcut(QCoreApplication::translate("MainWindow", "R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ScopeLife v 1.0.1", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "\340\270\243\340\270\260\340\270\232\340\270\232\340\270\253\340\271\211\340\270\255\340\270\207\340\270\252\340\271\210\340\270\255\340\270\207\340\270\201\340\270\245\340\271\211\340\270\255\340\270\207", nullptr));
        clock->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        setting_btn->setText(QCoreApplication::translate("MainWindow", "Setting", nullptr));
        library_btn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        start_btn->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        info_btn->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        menuControls->setTitle(QCoreApplication::translate("MainWindow", "Controls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
