/********************************************************************************
** Form generated from reading UI file 'webcontroller.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBCONTROLLER_H
#define UI_WEBCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebController
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *exit_btn;
    QPushButton *back_btn;
    QPushButton *next_btn;
    QLineEdit *url;
    QPushButton *go_btn;
    QProgressBar *progress;
    QWidget *view;

    void setupUi(QWidget *WebController)
    {
        if (WebController->objectName().isEmpty())
            WebController->setObjectName(QString::fromUtf8("WebController"));
        WebController->resize(1185, 652);
        verticalLayout = new QVBoxLayout(WebController);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(WebController);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 36));
        widget->setMaximumSize(QSize(16777215, 36));
        widget->setBaseSize(QSize(0, 30));
        widget->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 20, 0);
        exit_btn = new QPushButton(widget);
        exit_btn->setObjectName(QString::fromUtf8("exit_btn"));
        exit_btn->setMinimumSize(QSize(80, 30));

        horizontalLayout->addWidget(exit_btn);

        back_btn = new QPushButton(widget);
        back_btn->setObjectName(QString::fromUtf8("back_btn"));
        back_btn->setMinimumSize(QSize(60, 30));

        horizontalLayout->addWidget(back_btn);

        next_btn = new QPushButton(widget);
        next_btn->setObjectName(QString::fromUtf8("next_btn"));
        next_btn->setMinimumSize(QSize(60, 30));

        horizontalLayout->addWidget(next_btn);

        url = new QLineEdit(widget);
        url->setObjectName(QString::fromUtf8("url"));
        url->setMinimumSize(QSize(0, 30));
        url->setStyleSheet(QString::fromUtf8(""));
        url->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(url);

        go_btn = new QPushButton(widget);
        go_btn->setObjectName(QString::fromUtf8("go_btn"));
        go_btn->setMinimumSize(QSize(60, 30));

        horizontalLayout->addWidget(go_btn);

        progress = new QProgressBar(widget);
        progress->setObjectName(QString::fromUtf8("progress"));
        progress->setMinimumSize(QSize(150, 20));
        progress->setMaximumSize(QSize(150, 16777215));
        progress->setValue(0);

        horizontalLayout->addWidget(progress);


        verticalLayout->addWidget(widget);

        view = new QWidget(WebController);
        view->setObjectName(QString::fromUtf8("view"));

        verticalLayout->addWidget(view);


        retranslateUi(WebController);

        QMetaObject::connectSlotsByName(WebController);
    } // setupUi

    void retranslateUi(QWidget *WebController)
    {
        WebController->setWindowTitle(QCoreApplication::translate("WebController", "Form", nullptr));
        exit_btn->setText(QCoreApplication::translate("WebController", "Back", nullptr));
        back_btn->setText(QCoreApplication::translate("WebController", "<<", nullptr));
        next_btn->setText(QCoreApplication::translate("WebController", ">>", nullptr));
        go_btn->setText(QCoreApplication::translate("WebController", "GO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebController: public Ui_WebController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBCONTROLLER_H
