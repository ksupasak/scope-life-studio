/********************************************************************************
** Form generated from reading UI file 'videosetting.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOSETTING_H
#define UI_VIDEOSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoSetting
{
public:
    QComboBox *videoResolutionBox;
    QLabel *label_9;
    QComboBox *videoCodecBox;
    QLabel *label_4;
    QSlider *videoQualitySlider;
    QComboBox *containerFormatBox;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_6;
    QComboBox *videoFramerateBox;
    QComboBox *videoInput;
    QLabel *label_10;
    QComboBox *videoBitRateBox;
    QLabel *label_11;

    void setupUi(QWidget *VideoSetting)
    {
        if (VideoSetting->objectName().isEmpty())
            VideoSetting->setObjectName(QString::fromUtf8("VideoSetting"));
        VideoSetting->resize(639, 136);
        videoResolutionBox = new QComboBox(VideoSetting);
        videoResolutionBox->setObjectName(QString::fromUtf8("videoResolutionBox"));
        videoResolutionBox->setGeometry(QRect(170, 30, 131, 32));
        label_9 = new QLabel(VideoSetting);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(180, 70, 91, 21));
        videoCodecBox = new QComboBox(VideoSetting);
        videoCodecBox->setObjectName(QString::fromUtf8("videoCodecBox"));
        videoCodecBox->setGeometry(QRect(320, 30, 131, 32));
        label_4 = new QLabel(VideoSetting);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 70, 141, 16));
        videoQualitySlider = new QSlider(VideoSetting);
        videoQualitySlider->setObjectName(QString::fromUtf8("videoQualitySlider"));
        videoQualitySlider->setGeometry(QRect(470, 90, 111, 22));
        videoQualitySlider->setMaximum(4);
        videoQualitySlider->setOrientation(Qt::Horizontal);
        containerFormatBox = new QComboBox(VideoSetting);
        containerFormatBox->setObjectName(QString::fromUtf8("containerFormatBox"));
        containerFormatBox->setGeometry(QRect(320, 90, 131, 32));
        label_8 = new QLabel(VideoSetting);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(180, 10, 67, 19));
        label_7 = new QLabel(VideoSetting);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 70, 46, 16));
        label_6 = new QLabel(VideoSetting);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 10, 91, 21));
        videoFramerateBox = new QComboBox(VideoSetting);
        videoFramerateBox->setObjectName(QString::fromUtf8("videoFramerateBox"));
        videoFramerateBox->setGeometry(QRect(170, 90, 131, 32));
        videoInput = new QComboBox(VideoSetting);
        videoInput->setObjectName(QString::fromUtf8("videoInput"));
        videoInput->setGeometry(QRect(10, 30, 151, 32));
        label_10 = new QLabel(VideoSetting);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 10, 111, 19));
        videoBitRateBox = new QComboBox(VideoSetting);
        videoBitRateBox->setObjectName(QString::fromUtf8("videoBitRateBox"));
        videoBitRateBox->setGeometry(QRect(460, 30, 131, 32));
        label_11 = new QLabel(VideoSetting);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(470, 10, 91, 21));

        retranslateUi(VideoSetting);

        QMetaObject::connectSlotsByName(VideoSetting);
    } // setupUi

    void retranslateUi(QWidget *VideoSetting)
    {
        VideoSetting->setWindowTitle(QCoreApplication::translate("VideoSetting", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("VideoSetting", "Framerate:", nullptr));
        label_4->setText(QCoreApplication::translate("VideoSetting", "Format :", nullptr));
        label_8->setText(QCoreApplication::translate("VideoSetting", "Resolution:", nullptr));
        label_7->setText(QCoreApplication::translate("VideoSetting", "Quality:", nullptr));
        label_6->setText(QCoreApplication::translate("VideoSetting", "Codec:", nullptr));
        label_10->setText(QCoreApplication::translate("VideoSetting", "Video Input:", nullptr));
        label_11->setText(QCoreApplication::translate("VideoSetting", "Bitrate:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoSetting: public Ui_VideoSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOSETTING_H
