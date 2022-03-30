/********************************************************************************
** Form generated from reading UI file 'settingcontroller.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGCONTROLLER_H
#define UI_SETTINGCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingController
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLineEdit *system_mode;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *system_name;
    QLabel *label_3;
    QLineEdit *system_host;
    QLabel *label_4;
    QLineEdit *system_title;
    QLabel *sss;
    QLineEdit *system_startup;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QLineEdit *timer_1_title;
    QLabel *label_12;
    QLineEdit *timer_1_key;
    QLabel *label_25;
    QLabel *label_24;
    QLineEdit *timer_2_title;
    QLineEdit *timer_2_key;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout_5;
    QLineEdit *video_path;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *video_resolution;
    QLabel *label_17;
    QLineEdit *video_record_limit;
    QLabel *label_18;
    QLineEdit *video_record_auto;
    QLabel *label_10;
    QLineEdit *video_codec;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_6;
    QLabel *label_19;
    QLineEdit *image_path;
    QLabel *label_20;
    QLineEdit *image_resolution;
    QLabel *label_23;
    QLineEdit *image_quality;
    QLabel *label_21;
    QLineEdit *image_crop;
    QPushButton *reset_btn;
    QPushButton *save_btn;
    QPushButton *load_btn;
    QPushButton *quit_btn;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_7;
    QFormLayout *formLayout_7;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *input_source_1;
    QLineEdit *input_source_2;

    void setupUi(QWidget *SettingController)
    {
        if (SettingController->objectName().isEmpty())
            SettingController->setObjectName(QString::fromUtf8("SettingController"));
        SettingController->resize(1451, 893);
        groupBox = new QGroupBox(SettingController);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 431, 211));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        system_mode = new QLineEdit(groupBox);
        system_mode->setObjectName(QString::fromUtf8("system_mode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, system_mode);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        system_name = new QLineEdit(groupBox);
        system_name->setObjectName(QString::fromUtf8("system_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, system_name);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        system_host = new QLineEdit(groupBox);
        system_host->setObjectName(QString::fromUtf8("system_host"));
        system_host->setMinimumSize(QSize(300, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, system_host);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        system_title = new QLineEdit(groupBox);
        system_title->setObjectName(QString::fromUtf8("system_title"));
        system_title->setMinimumSize(QSize(300, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, system_title);

        sss = new QLabel(groupBox);
        sss->setObjectName(QString::fromUtf8("sss"));

        formLayout->setWidget(4, QFormLayout::LabelRole, sss);

        system_startup = new QLineEdit(groupBox);
        system_startup->setObjectName(QString::fromUtf8("system_startup"));

        formLayout->setWidget(4, QFormLayout::FieldRole, system_startup);


        horizontalLayout->addLayout(formLayout);

        groupBox_3 = new QGroupBox(SettingController);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 250, 431, 211));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        timer_1_title = new QLineEdit(groupBox_3);
        timer_1_title->setObjectName(QString::fromUtf8("timer_1_title"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, timer_1_title);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        timer_1_key = new QLineEdit(groupBox_3);
        timer_1_key->setObjectName(QString::fromUtf8("timer_1_key"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, timer_1_key);

        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_25);

        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_24);

        timer_2_title = new QLineEdit(groupBox_3);
        timer_2_title->setObjectName(QString::fromUtf8("timer_2_title"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, timer_2_title);

        timer_2_key = new QLineEdit(groupBox_3);
        timer_2_key->setObjectName(QString::fromUtf8("timer_2_key"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, timer_2_key);


        horizontalLayout_3->addLayout(formLayout_3);

        groupBox_4 = new QGroupBox(SettingController);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(670, 370, 521, 211));
        horizontalLayout_5 = new QHBoxLayout(groupBox_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        video_path = new QLineEdit(groupBox_4);
        video_path->setObjectName(QString::fromUtf8("video_path"));
        video_path->setMinimumSize(QSize(400, 0));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, video_path);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_16);

        video_resolution = new QLineEdit(groupBox_4);
        video_resolution->setObjectName(QString::fromUtf8("video_resolution"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, video_resolution);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_17);

        video_record_limit = new QLineEdit(groupBox_4);
        video_record_limit->setObjectName(QString::fromUtf8("video_record_limit"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, video_record_limit);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_18);

        video_record_auto = new QLineEdit(groupBox_4);
        video_record_auto->setObjectName(QString::fromUtf8("video_record_auto"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, video_record_auto);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_10);

        video_codec = new QLineEdit(groupBox_4);
        video_codec->setObjectName(QString::fromUtf8("video_codec"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, video_codec);


        horizontalLayout_5->addLayout(formLayout_5);

        groupBox_5 = new QGroupBox(SettingController);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(670, 150, 521, 211));
        horizontalLayout_6 = new QHBoxLayout(groupBox_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_19);

        image_path = new QLineEdit(groupBox_5);
        image_path->setObjectName(QString::fromUtf8("image_path"));
        image_path->setMinimumSize(QSize(400, 0));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, image_path);

        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_20);

        image_resolution = new QLineEdit(groupBox_5);
        image_resolution->setObjectName(QString::fromUtf8("image_resolution"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, image_resolution);

        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_23);

        image_quality = new QLineEdit(groupBox_5);
        image_quality->setObjectName(QString::fromUtf8("image_quality"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, image_quality);

        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_21);

        image_crop = new QLineEdit(groupBox_5);
        image_crop->setObjectName(QString::fromUtf8("image_crop"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, image_crop);


        horizontalLayout_6->addLayout(formLayout_6);

        reset_btn = new QPushButton(SettingController);
        reset_btn->setObjectName(QString::fromUtf8("reset_btn"));
        reset_btn->setGeometry(QRect(50, 620, 112, 32));
        save_btn = new QPushButton(SettingController);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));
        save_btn->setGeometry(QRect(170, 620, 112, 32));
        load_btn = new QPushButton(SettingController);
        load_btn->setObjectName(QString::fromUtf8("load_btn"));
        load_btn->setGeometry(QRect(290, 620, 112, 32));
        quit_btn = new QPushButton(SettingController);
        quit_btn->setObjectName(QString::fromUtf8("quit_btn"));
        quit_btn->setGeometry(QRect(1080, 620, 112, 32));
        groupBox_6 = new QGroupBox(SettingController);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(670, 20, 521, 121));
        horizontalLayout_7 = new QHBoxLayout(groupBox_6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_31 = new QLabel(groupBox_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_31);

        label_32 = new QLabel(groupBox_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_32);

        input_source_1 = new QLineEdit(groupBox_6);
        input_source_1->setObjectName(QString::fromUtf8("input_source_1"));
        input_source_1->setMinimumSize(QSize(400, 0));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, input_source_1);

        input_source_2 = new QLineEdit(groupBox_6);
        input_source_2->setObjectName(QString::fromUtf8("input_source_2"));
        input_source_2->setMinimumSize(QSize(400, 0));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, input_source_2);


        horizontalLayout_7->addLayout(formLayout_7);


        retranslateUi(SettingController);

        QMetaObject::connectSlotsByName(SettingController);
    } // setupUi

    void retranslateUi(QWidget *SettingController)
    {
        SettingController->setWindowTitle(QCoreApplication::translate("SettingController", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingController", "System", nullptr));
        label->setText(QCoreApplication::translate("SettingController", "Mode :", nullptr));
        label_2->setText(QCoreApplication::translate("SettingController", "Solution :", nullptr));
        label_3->setText(QCoreApplication::translate("SettingController", "Host :", nullptr));
        label_4->setText(QCoreApplication::translate("SettingController", "Title :", nullptr));
        sss->setText(QCoreApplication::translate("SettingController", "Startup :", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SettingController", "Timer", nullptr));
        label_11->setText(QCoreApplication::translate("SettingController", "Timer 1 Title :", nullptr));
        label_12->setText(QCoreApplication::translate("SettingController", "Timer 1 Key :", nullptr));
        label_25->setText(QCoreApplication::translate("SettingController", "Timer 2 Key :", nullptr));
        label_24->setText(QCoreApplication::translate("SettingController", "Timer 2 Title :", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SettingController", "Video Record", nullptr));
        label_15->setText(QCoreApplication::translate("SettingController", "Video Path :", nullptr));
        label_16->setText(QCoreApplication::translate("SettingController", "Resolution :", nullptr));
        label_17->setText(QCoreApplication::translate("SettingController", "Record Limit :", nullptr));
        label_18->setText(QCoreApplication::translate("SettingController", "Record Auto :", nullptr));
        label_10->setText(QCoreApplication::translate("SettingController", "Codec :", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SettingController", "Image Capture", nullptr));
        label_19->setText(QCoreApplication::translate("SettingController", "Image Path :", nullptr));
        label_20->setText(QCoreApplication::translate("SettingController", "Resolution :", nullptr));
        label_23->setText(QCoreApplication::translate("SettingController", "Quality :", nullptr));
        label_21->setText(QCoreApplication::translate("SettingController", "Crop :", nullptr));
        reset_btn->setText(QCoreApplication::translate("SettingController", "Back", nullptr));
        save_btn->setText(QCoreApplication::translate("SettingController", "Save", nullptr));
        load_btn->setText(QCoreApplication::translate("SettingController", "Load", nullptr));
        quit_btn->setText(QCoreApplication::translate("SettingController", "Quit", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("SettingController", "Video Input", nullptr));
        label_31->setText(QCoreApplication::translate("SettingController", "Input 1 :", nullptr));
        label_32->setText(QCoreApplication::translate("SettingController", "Input 2 :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingController: public Ui_SettingController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGCONTROLLER_H
