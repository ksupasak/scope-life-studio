#include "videocontroller.h"
#include "ui_videocontroller.h"
#include <QMessageBox>
#include <QMediaMetaData>
#include <QMediaDevices>
#include <QMediaRecorder>
#include <QSoundEffect>
#include <QCamera>
#include <QDir>
#include <QMediaFormat>
#include <QMediaPlayer>
#include <QTemporaryFile>
//#include <QCameraImageCapture>
//#include "videosettings.h"
//#include "imagesettings.h"
#include <QWebSocket>
#include <QVideoSink>
#include <QBuffer>

VideoController::VideoController(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoController),
    m_pWebSocketServer(new QWebSocketServer(QStringLiteral("Echo Server"),
                                            QWebSocketServer::NonSecureMode, this))
{
    ui->setupUi(this);

    this->capture_counter = 0 ;


    qDebug()<<" init video  xx ";

    player = new QMediaPlayer(this);

    audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    //connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setSource(QUrl::fromLocalFile(QTemporaryFile(":/Shutter-01.wav").fileName()));
    audioOutput->setVolume(100);
    player->play();




    QSize size(155,155);
     QPixmap pixmap1(":/Appr4.png");
     QIcon ButtonIcon(pixmap1);
     ui->capture_btn->setIcon(ButtonIcon);
     ui->capture_btn->setIconSize(size);
     ui->capture_btn->setText("");
     ui->capture_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");
     ui->capture_status->setText("");

//     ui->capture_btn->setIcon(QIcon());
//     ui->capture_btn->setText("2");

//     QPalette palette;
//     palette.setBrush(ui->capture_btn->backgroundRole(), QBrush(pixmap1));
//     ui->capture_btn->setFlat(true);
//     ui->capture_btn->setAutoFillBackground(true);
//     ui->capture_btn->setPalette(palette);



     QPixmap pixmap2(":/Appr1.png");
     QIcon ButtonIcon2(pixmap2);
     ui->record_btn->setIcon(ButtonIcon2);
     ui->record_btn->setIconSize(size);
     ui->record_btn->setText("fff");
     ui->record_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");
     ui->record_status->setText("");
//     connect(ui->record_status, signal( clicked ), this, slot(record()));



//     QObject::connect(&ui->capture_status, SIGNAL(),
//                      &this, SLOT(setText(const QString& text)));


//     connect(ui->capture_status, &QWidget::mousePressEvent, this, &VideoController::on_capture_btn_clicked);

//        probe = new QVideoProbe;

//        connect(probe, &QVideoProbe::videoFrameProbed, this, &VideoController::processVideoFrame);



     player = new QMediaPlayer;
     audioOutput = new QAudioOutput;
     player->setAudioOutput(audioOutput);
 //    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
 //    player->setSource(QUrl::fromLocalFile("C:\\Users\\ksupa\\Desktop\\ScopeLifeX\\ScopeLife\\Shutter-01.wav"));

     player->setSource(QUrl("qrc:/Shutter-01.wav"));
     audioOutput->setVolume(100);
   //  player->play();



//     m_pWebSocketServer = new QWebSocketServer(QStringLiteral("Echo Server"),
//                                                QWebSocketServer::NonSecureMode, this);
     if (m_pWebSocketServer->listen(QHostAddress::Any, 4756)) {
         if (true)
             qDebug() << "Echoserver listening on port" << 4756;
         connect(m_pWebSocketServer, &QWebSocketServer::newConnection,
                 this, &VideoController::onNewConnection);
//         connect(m_pWebSocketServer, &QWebSocketServer::closed, this, &VideoController::closed);
     }
qDebug()<<" server video  ";


}


//! [onNewConnection]
void VideoController::onNewConnection()
{
    QWebSocket *pSocket = m_pWebSocketServer->nextPendingConnection();
    qDebug()<<"Connecting ";
    connect(pSocket, &QWebSocket::textMessageReceived, this, &VideoController::processTextMessage);
    connect(pSocket, &QWebSocket::binaryMessageReceived, this, &VideoController::processBinaryMessage);
    connect(pSocket, &QWebSocket::disconnected, this, &VideoController::socketDisconnected);

    m_clients << pSocket;
}
//! [onNewConnection]

//! [processTextMessage]
void VideoController::processTextMessage(QString message)
{

    qDebug() << "Message received:" ;

    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
    if (true)
        qDebug() << "Message received:" << message<<" "<<   m_camera_preview->isActive();
    if (pClient) {
        QByteArray ba;

        QBuffer buffer(&ba);
          qDebug() << "Message received:" ;
        buffer.open(QIODevice::WriteOnly);
  qDebug() << "Message received:" ;
        QImage scaledImage = sink->videoFrame().toImage().scaled(320,240,
                                                         Qt::KeepAspectRatio,
                                                         Qt::SmoothTransformation);
          qDebug() << "Message received:" ;
        qDebug()<<scaledImage;
        qDebug()<<scaledImage.save(&buffer,"png");
         pClient->sendBinaryMessage(ba);

    }
}
//! [processTextMessage]

//! [processBinaryMessage]
void VideoController::processBinaryMessage(QByteArray message)
{
    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
    if (true)
        qDebug() << "Binary Message received:" << message;
    if (pClient) {
        pClient->sendBinaryMessage(message);
    }
}
//! [processBinaryMessage]

//! [socketDisconnected]
void VideoController::socketDisconnected()
{
    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
    if (true)
        qDebug() << "socketDisconnected:" << pClient;
    if (pClient) {
        m_clients.removeAll(pClient);
        pClient->deleteLater();
    }
}
//! [socketDisconnected]



//void setCamera(const QCameraInfo &cameraInfo);

//void updateCaptureMode();



//void updateRecordTime();
//void updateCameraState(QCamera::State state);
//void updateRecorderState(QMediaRecorder::State state);
//void setExposureCompensation(int index);
//void displayRecorderError();
//void displayCameraError();
//void updateCameraDevice(QAction *action);
//void processCapturedImage(int requestId, const QImage &img);

//void capture();

VideoController::~VideoController()
{
    delete ui;
}

void VideoController::setupCapturePreview(QVideoWidget *view)
{
    this->preview = view;
}

void VideoController::stop()
{
//    m_camera_session->stop();
//    if(!support_native_record){
//        m_camera_preview->stop();
//    }

}

void VideoController::startSession()
{

    prepare();
   qDebug()<< "Start session";
//    stop();
    m_camera_session->start();
    capture_counter = 0;
    ui->record_btn->setText("");
}

void VideoController::startPreview()
{
    stop();
     qDebug()<< "Start Preview";
    m_camera_preview->start();
}

void VideoController::prepare()
{

    // init camera

    QString default_input = core->getStringValue("input_source_1");

    // default source input from configure

//    const QList<QCameraDevice> availableCameras = QMediaDevices::availableCameras();
    const QList<QCameraDevice> availableCameras = QMediaDevices::videoInputs();

    QCameraDevice last;

    qDebug()<< "Number of Camera : "<< availableCameras.length();

    for (const QCameraDevice &cameraInfo : availableCameras) {

        qDebug()<< "Camera : "<< cameraInfo.description();


         if(default_input.compare(cameraInfo.description())==0){
             defaultCameraInfo = cameraInfo;
         }


        last = cameraInfo;

    }


    if (defaultCameraInfo.isNull()){

        defaultCameraInfo = QMediaDevices::defaultVideoInput();

    }



    qDebug()<< "Camera Default : "<< defaultCameraInfo.description();




    setCamera(defaultCameraInfo);

}



void VideoController::setCamera(const QCameraDevice &cameraDevice)
{
        QCamera * camera = new QCamera(cameraDevice);

        m_camera_session.reset(camera);

        m_capture_session.setCamera(camera);

        m_capture_session.setVideoOutput(ui->live);


        QCamera * camera2 = new QCamera(cameraDevice);

        m_camera_preview.reset(camera2);

        m_capture_preview.setCamera(camera2);


        sink = new QVideoSink(this);
        m_capture_preview.setVideoSink(sink);



//        m_camera_preview->start();





        if (!m_mediaRecorder) {
            m_mediaRecorder.reset(new QMediaRecorder);
            m_capture_session.setRecorder(m_mediaRecorder.data());
            connect(m_mediaRecorder.data(), &QMediaRecorder::recorderStateChanged, this, &VideoController::updateRecorderState);
        }

        m_imageCapture = new QImageCapture;

        m_capture_session.setImageCapture(m_imageCapture);

        connect(m_mediaRecorder.data(), &QMediaRecorder::durationChanged, this, &VideoController::updateRecordTime);
        connect(m_mediaRecorder.data(), &QMediaRecorder::errorChanged, this, &VideoController::displayRecorderError);
        m_mediaRecorder->setOutputLocation(QDir::homePath()+"/out.mp4");


        connect(m_imageCapture, &QImageCapture::readyForCaptureChanged, this, &VideoController::readyForCapture);
        connect(m_imageCapture, &QImageCapture::imageCaptured, this, &VideoController::processCapturedImage);
        connect(m_imageCapture, &QImageCapture::imageSaved, this, &VideoController::imageSaved);
        //connect(m_imageCapture.data(), &QImageCapture::errorOccurred, this, &VideoController::displayCaptureError);

        readyForCapture(m_imageCapture->isReadyForCapture());
        if(true){

        if (m_camera_session->cameraFormat().isNull()) {
            // Setting default settings.
            // The biggest resolution and the max framerate
            auto formats = cameraDevice.videoFormats();
            auto defaultFormat = formats.first();

            for (const auto &format : formats) {

                bool isFormatBigger = format.resolution().width() > defaultFormat.resolution().width()
                        && format.resolution().height() > defaultFormat.resolution().height();

                defaultFormat = isFormatBigger ? format : defaultFormat;
            }

            m_camera_session->setCameraFormat(defaultFormat);
            m_mediaRecorder->setVideoFrameRate(defaultFormat.maxFrameRate());
        }


        }

        configureVideoSettings();

         m_camera_session->start();





//            connect(m_imageCapture.data(), &QImageCapture::readyForCaptureChanged, this, &VideoController::readyForCapture);
          //   connect(m_imageCapture.data(), &QImageCapture::imageCaptured, this, &VideoController::processCapturedImage);
        //    connect(m_imageCapture.data(), &QCameraImageCapture::imageSaved, this, &MainWindow::imageSaved);
        //    connect(m_imageCapture.data(), QOverload<int, QCameraImageCapture::Error, const QString &>::of(&QCameraImageCapture::error),
        //            this, &MainWindow::displayCaptureError);

        //    connect(m_camera.data(), QOverload<QCamera::LockStatus, QCamera::LockChangeReason>::of(&QCamera::lockStatusChanged),
        //            this, &MainWindow::updateLockStatus);

        //    ui->captureWidget->setTabEnabled(0, (m_camera->isCaptureModeSupported(QCamera::CaptureStillImage)));
        //    ui->captureWidget->setTabEnabled(1, (m_camera->isCaptureModeSupported(QCamera::CaptureVideo)));


//    QCamera * camera = new QCamera(cameraDevice);

//    m_camera_session.reset(camera);
//    m_camera_preview.reset(camera);


//    m_capture_preview.setCamera(m_camera_preview.data());


//    qDebug()<<"set Video output preview";
//    m_capture_preview.setVideoOutput(this->preview);

//    preview->setStyleSheet("background:rgba(255,255,255,255);");


////    m_camera_preview->start();


////   support_native_record = m_camera_preview->isCaptureModeSupported(QCamera::CaptureVideo);



//   // connect(m_camera.data(), &QCamera::stateChanged, this, &VideoController::updateCameraState);
//  //  connect(m_camera.data(), QOverload<QCamera::Error>::of(&QCamera::error), this, &VideoController::displayCameraError);

//  //  connect(m_camera_capture.data(), &QCamera::stateChanged, this, &VideoController::updateCameraState);
//   // connect(m_camera_capture.data(), QOverload<QCamera::Error>::of(&QCamera::error), this, &VideoController::displayCameraError);


////    if(support_native_record){

//    if(true){


//    m_mediaRecorder.reset(new QMediaRecorder(m_camera_preview.data()));
////    connect(m_mediaRecorder.data(), &QMediaRecorder, this, &VideoController::updateRecorderState);
////    connect(m_mediaRecorder.data(), &QMediaRecorder::durationChanged, this, &VideoController::updateRecordTime);
////    connect(m_mediaRecorder.data(), QOverload<QMediaRecorder::Error>::of(&QMediaRecorder::error),
////            this, &VideoController::displayRecorderError);
//    configureVideoSettings();

//    }else{

//         m_mediaRecorder.reset(new QMediaRecorder(m_camera_session.data()));


//    }

////    connect(ui->exposureCompensation, &QAbstractSlider::valueChanged, this, &MainWindow::setExposureCompensation);
//    m_capture_session.setCamera(m_camera_session.data());
//    m_capture_session.setVideoOutput(ui->live);

////m_camera_session.

////    updateCameraState(m_camera->state());
// //   updateCameraState(m_camera_capture->state());
////    updateLockStatus(m_camera->lockStatus(), QCamera::UserRequest);
////    updateRecorderState(m_mediaRecorder->state());

//    QImageCapture *q_img_capture = new QImageCapture();
////    q_img_capture->addMetaData()

////    m_imageCapture.reset(new QImageCapture(m_camera_session.data()));


////    connect(m_imageCapture.data(), &QCameraImageCapture::readyForCaptureChanged, this, &MainWindow::readyForCapture);
//     connect(m_imageCapture.data(), &QImageCapture::imageCaptured, this, &VideoController::processCapturedImage);
////    connect(m_imageCapture.data(), &QCameraImageCapture::imageSaved, this, &MainWindow::imageSaved);
////    connect(m_imageCapture.data(), QOverload<int, QCameraImageCapture::Error, const QString &>::of(&QCameraImageCapture::error),
////            this, &MainWindow::displayCaptureError);

////    connect(m_camera.data(), QOverload<QCamera::LockStatus, QCamera::LockChangeReason>::of(&QCamera::lockStatusChanged),
////            this, &MainWindow::updateLockStatus);

////    ui->captureWidget->setTabEnabled(0, (m_camera->isCaptureModeSupported(QCamera::CaptureStillImage)));
////    ui->captureWidget->setTabEnabled(1, (m_camera->isCaptureModeSupported(QCamera::CaptureVideo)));



//    updateCaptureMode();


//  //  m_camera_preview->start();


//   m_camera_session->start();
//  // m_camera->stop();
//  // m_camera_preview->start();
//  // m_camera_capture->stop();

//    if(!support_native_record){
//        ui->record_btn->setDisabled(true);

//        QPixmap pixmap2(":/Appr6.png");
//        QIcon ButtonIcon2(pixmap2);
//        QSize size(155,155);
//        ui->record_btn->setIcon(ButtonIcon2);
//        ui->record_btn->setIconSize(size);
//        ui->record_btn->setText("");
//        ui->record_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");

//    }else{
//        ui->record_btn->setDisabled(false);

//        QPixmap pixmap2(":/Appr1.png");
//        QIcon ButtonIcon2(pixmap2);
//        QSize size(155,155);
//        ui->record_btn->setIcon(ButtonIcon2);
//        ui->record_btn->setIconSize(size);
//        ui->record_btn->setText("");
//        ui->record_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");
//    }


//  //  probe->setSource(m_camera_session.data());

}


void VideoController::updateCaptureMode()
{
//    int tabIndex = ui->captureWidget->currentIndex();

//    QCamera::CaptureModes captureMode =  QCamera::CaptureVideo;

//    if (m_camera_preview->isCaptureModeSupported(captureMode))
//        m_camera_preview->setCaptureMode(captureMode);
//    else
//        m_camera_preview->setCaptureMode(QCamera::CaptureStillImage);

//    m_camera_session->setCaptureMode(QCamera::CaptureStillImage);



}

void VideoController::setCore(CoreLib *core)
{
    this->core = core;
}

void VideoController::setMediaLibraryContext(MediaLibraryContext *media_context)
{
    this->media_context = media_context;
}






//void VideoController::updateCameraState(QCamera::State state)
//{
////    switch (state) {
////    case QCamera::ActiveState:
////        ui->actionStartCamera->setEnabled(false);
////        ui->actionStopCamera->setEnabled(true);
////        ui->captureWidget->setEnabled(true);
////        ui->actionSettings->setEnabled(true);
////        break;
////    case QCamera::UnloadedState:
////    case QCamera::LoadedState:
////        ui->actionStartCamera->setEnabled(true);
////        ui->actionStopCamera->setEnabled(false);
////        ui->captureWidget->setEnabled(false);
////        ui->actionSettings->setEnabled(false);
////    }
//}

void VideoController::updateRecorderState(QMediaRecorder::RecorderState state)
{
//    switch (state) {
//    case QMediaRecorder::StoppedState:
//        ui->recordButton->setEnabled(true);
//        ui->pauseButton->setEnabled(true);
//        ui->stopButton->setEnabled(false);
//        break;
//    case QMediaRecorder::PausedState:
//        ui->recordButton->setEnabled(true);
//        ui->pauseButton->setEnabled(false);
//        ui->stopButton->setEnabled(true);
//        break;
//    case QMediaRecorder::RecordingState:
//        ui->recordButton->setEnabled(false);
//        ui->pauseButton->setEnabled(true);
//        ui->stopButton->setEnabled(true);
//        break;
//    }
}

void VideoController::setExposureCompensation(int index)
{
//    m_camera_session->exposure()->setExposureCompensation(index*0.5);
}

void VideoController::displayRecorderError()
{
    QMessageBox::warning(this, tr("Capture Error!!"), m_mediaRecorder->errorString());

}

void VideoController::displayCameraError()
{
    QMessageBox::warning(this, tr("Camera Error"), m_camera_session->errorString());
}

void VideoController::updateCameraDevice(QAction *action)
{
//    setCamera(qvariant_cast<QCameraInfo>(action->data()));
}
void VideoController::updateRecordTime()
{
    //00:00:00

    qint64 d = m_mediaRecorder->duration();
    QString min = QString::number(d/1000/60).rightJustified(3, '0');
    QString sec = QString::number((d/1000)%60).rightJustified(2, '0');
    QString msec = QString::number(d%100).rightJustified(2, '0');

    QString str = min+":"+sec+":"+msec;

    ui->record_status->setText(str);

}


void VideoController::processCapturedImage(int requestId, const QImage& img)
{
    Q_UNUSED(requestId);

    qDebug()<<"Image Capturing x";

  // QSoundEffect *se = new QSoundEffect();

 //  QSoundEffect::play(":/Shutter-01.wav");

    QSoundEffect effect;
    effect.setSource(QUrl::fromLocalFile(":/Shutter-01.wav"));
   //effect.setLoopCount(QSoundEffect::Infinite);
    effect.setVolume(1.0f);
    effect.play();

    QImage scaledImage = img.scaled(ui->preview->size(),
                                    Qt::KeepAspectRatio,
                                    Qt::SmoothTransformation);




    ui->preview->setPixmap(QPixmap::fromImage(scaledImage));


//    if(images.size()>0){
//        ui->img_1->setPixmap(QPixmap::fromImage(images.last()));
//    }
//    if(images.size()>1){
//        ui->img_2->setPixmap(QPixmap::fromImage(images.at(images.size()-2)));
//    }
//    if(images.size()>2){
//        ui->img_3->setPixmap(QPixmap::fromImage(images.at(images.size()-3)));
//    }
//    if(images.size()>3){
//        ui->img_4->setPixmap(QPixmap::fromImage(images.at(images.size()-4)));
//    }


    images.append(scaledImage);



    QString filename = media_context->generateInternalStoragePath("image")+".jpeg";

    qDebug()<<"Image Path : "<<filename;

    if(img.save( filename, "JPEG",90)){

        emit callbackCaptureImage(filename);

    }else{
        emit callbackErrorCapture("Image Caputre Error");
    }

    QPixmap pixmap(":/Appr4.png");
    QIcon ButtonIcon(pixmap);
    QSize size(155,155);
    ui->capture_btn->setIcon(ButtonIcon);
    ui->capture_btn->setIconSize(size);
    ui->capture_btn->setText("");
    ui->capture_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");

    capture_counter++;
    ui->capture_status->setText(QString::number(capture_counter));




//    displayCapturedImage();
//    QTimer::singleShot(4000, this, &Camera::displayViewfinder);

//    m_camera->setCaptureMode(QCamera::CaptureVideo);

}

void VideoController::record()
{

        qDebug()<<"record hit";
        QMediaRecorder::RecorderState state = m_mediaRecorder->recorderState();

        if(state==QMediaRecorder::RecordingState){
            m_mediaRecorder->stop();
            qDebug()<<"Video stop record  : "<<m_mediaRecorder->outputLocation();

            QPixmap pixmap2(":/Appr1.png");
            QIcon ButtonIcon2(pixmap2);
            QSize size(155,155);
            ui->record_btn->setIcon(ButtonIcon2);
            ui->record_btn->setIconSize(size);
            ui->record_btn->setText("");
            ui->record_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");


        }else{


////            configureVideoSettings();

////            qDebug()<<" Codec "<<m_videoSettings.codec();
////            qDebug()<<" Resolution "<<m_videoSettings.resolution();
////            qDebug()<<" Rate "<<m_videoSettings.bitRate();
////            qDebug()<<" Quality "<<m_videoSettings.quality();
////            qDebug()<<" FPS "<<m_videoSettings.frameRate();
////            m_mediaRecorder->setVideoSettings(m_videoSettings);



            QString filename = media_context->generateInternalStoragePath("video")+".mp4";


            if(true){

            //m_mediaRecorder->setMetaData(QMediaMetaData::Title, QVariant(QLatin1String("Test Title")));
            m_mediaRecorder->setOutputLocation(filename);
            qDebug()<<"Video start record : "<<filename;
            m_mediaRecorder->record();

            }else{



            }

            QPixmap pixmap2(":/Appr3.png");
            QIcon ButtonIcon2(pixmap2);
            QSize size(155,155);
            ui->record_btn->setIcon(ButtonIcon2);
            ui->record_btn->setIconSize(size);
            ui->record_btn->setText("");
            ui->record_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");



        }

        updateRecordTime();


}

void VideoController::capture()
{
    QPixmap pixmap(":/Appr5.png");
    QIcon ButtonIcon(pixmap);
    QSize size(155,155);
    ui->capture_btn->setIcon(ButtonIcon);
    ui->capture_btn->setIconSize(size);
    ui->capture_btn->setText("");
    ui->capture_btn->setStyleSheet("background:rgba(255,255,255,0);border:0px");


     player->play();

     qDebug()<<"Start capture";

     m_imageCapture->captureToFile();

     qDebug()<<"Finish capture";



}


void VideoController::on_back_btn_clicked()
{
    emit back();
}

void VideoController::on_finish_button_clicked()
{
    emit finish();
}

void VideoController::on_capture_btn_clicked()
{

     this->capture();

}

void VideoController::on_record_btn_clicked()
{
    record();
}

void VideoController::configureCaptureSettings()
{

}

void VideoController::configureImageSettings()
{

    //    ImageSettings settingsDialog(m_imageCapture.data());
    //    settingsDialog.setWindowFlags(settingsDialog.windowFlags() & ~Qt::WindowContextHelpButtonHint);

    //    settingsDialog.setImageSettings(m_imageSettings);

    //    if (settingsDialog.exec()) {
    //        m_imageSettings = settingsDialog.imageSettings();
    //        m_imageCapture->setEncodingSettings(m_imageSettings);

}

void VideoController::processVideoFrame(QVideoFrame frame)
{
    qDebug() << frame.size() << frame.pixelFormat();

    ui->msg->setText("");
}

void VideoController::configureVideoSettings()
{

   // QVideoEncoderSettings settings = m_mediaRecorder->videoSettings();
    QMediaFormat format = m_mediaRecorder->mediaFormat();

    const auto supportedVideoCodecs = QMediaFormat().supportedVideoCodecs(QMediaFormat::Encode);
    for (const auto &codec : supportedVideoCodecs) {
        QString description = QMediaFormat::videoCodecDescription(codec);
        qDebug()<<"Support Codecs : "<<QMediaFormat::videoCodecName(codec);
        //ui->videoCodecBox->addItem(QMediaFormat::videoCodecName(codec) + ": " + description, QVariant::fromValue(codec));
    }



    format.setFileFormat(format.fileFormat());
    format.setVideoCodec(supportedVideoCodecs.first());

    auto currentCameraFormat = m_mediaRecorder->captureSession()->camera()->cameraFormat();

    m_mediaRecorder->setMediaFormat(format);
    m_mediaRecorder->setQuality(QMediaRecorder::VeryHighQuality);
   // m_mediaRecorder->setAudioSampleRate(ui->audioSampleRateBox->value());

    m_mediaRecorder->setVideoResolution(currentCameraFormat.resolution());
    m_mediaRecorder->setVideoFrameRate(currentCameraFormat.maxFrameRate());

    m_mediaRecorder->captureSession()->camera()->setCameraFormat(currentCameraFormat);


  //  VideoSetting settingsDialog(m_mediaRecorder.data());
   // settingsDialog.setWindowFlags(settingsDialog.windowFlags() & ~Qt::WindowContextHelpButtonHint);

  //  if (settingsDialog.exec())
   //     settingsDialog.applySettings();

//     m_camera_session->unlock();
//     m_camera_preview->unlock();


//       QVideoEncoderSettings settings = m_mediaRecorder->videoSettings();
//       settings.setResolution(1280,720);
////     settings.setQuality(QMultimedia::VeryHighQuality);
//       settings.setFrameRate(30.0);
//       settings.setCodec("avc1");
//       settings.setBitRate(8000);



       //    qDebug()<<" Codec "<<settings.codec();
       //    qDebug()<<" Resolution "<<settings.resolution();
       //    qDebug()<<" Rate "<<settings.bitRate();
       //    qDebug()<<" Quality "<<settings.quality();
       //    qDebug()<<" FPS "<<settings.frameRate();


//       m_mediaRecorder->setVideoSettings(settings);
//       m_mediaRecorder->setContainerFormat("mp4");

//       m_camera_session->setCaptureMode(QCamera::CaptureVideo);
//       m_camera_session->focus();
//       m_camera_preview->setCaptureMode(QCamera::CaptureVideo);
//       m_camera_preview->focus();

//       QAudioEncoderSettings audioSettings;
//       m_mediaRecorder->setAudioSettings(audioSettings);
//       m_mediaRecorder->setVideoSettings(m_videoSettings);
//       m_mediaRecorder->setEncodingSettings(audioSettings,m_videoSettings,"mp4");






//    audioSettings.setCodec("audio/amr");
//    audioSettings.setQuality(QMultimedia::HighQuality);



//    m_camera_session->locked();
//    m_camera_preview->locked();


}

void VideoController::imageSaved(int id, const QString &fileName)
{
    Q_UNUSED(id);

    qDebug()<<fileName;

    m_isCapturingImage = false;
    if (m_applicationExiting)
        close();
}

void VideoController::readyForCapture(bool ready)
{
    //ui->takeImageButton->setEnabled(ready);
}


QVariant VideoController::boxValue(const QComboBox *box) const
    {
        int idx = box->currentIndex();
        if (idx == -1)
            return QVariant();

        return box->itemData(idx);
    }
