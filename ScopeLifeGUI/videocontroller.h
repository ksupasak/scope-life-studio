#ifndef VIDEOCONTROLLER_H
#define VIDEOCONTROLLER_H
#include <QWidget>
#include <QVideoWidget>


#include <QCamera>
#include <QImageCapture>
#include <QMediaRecorder>
#include <corelib.h>
#include <medialibrarycontext.h>
#include <QComboBox>
#include <QMediaCaptureSession>
#include <QAudioOutput>
#include <QWebSocketServer>



//#include <QCameraViewfinder>
//#include <QVideoProbe>
#include "ScopeLifeGUI_global.h"
namespace Ui {
class VideoController;
}

class SCOPELIFEGUI_EXPORT VideoController : public QWidget
{

    Q_OBJECT

signals:
    void back();
    void finish();
    void callbackCaptureImage(QString filename);
    void callbackErrorCapture(QString msg);


public:
    explicit VideoController(QWidget *parent = nullptr);
    ~VideoController();



    void setupCapturePreview(QVideoWidget *view);

    void stop();
    void prepare();
    void startSession();
    void startPreview();

   void setCamera(const QCameraDevice &cameraDevice);
//    void setCamera(const QCameraInfo &cameraInfo);

    void updateCaptureMode();

    void setCore(CoreLib *core);
    void setMediaLibraryContext(MediaLibraryContext *media_context);

public slots:

    void updateRecordTime();
//    void updateCameraState(QCamera state);
    void updateRecorderState(QMediaRecorder::RecorderState state);
    void setExposureCompensation(int index);
    void displayRecorderError();
    void displayCameraError();
    void updateCameraDevice(QAction *action);
    void processCapturedImage(int requestId, const QImage &img);

    void record();
    void capture();

private slots:
    void onNewConnection();
    void processTextMessage(QString message);
    void processBinaryMessage(QByteArray message);
    void socketDisconnected();


private slots:
    void on_back_btn_clicked();

    void on_finish_button_clicked();

    void on_capture_btn_clicked();

    void on_record_btn_clicked();


    void configureCaptureSettings();

    void configureVideoSettings();

    void configureImageSettings();
    void readyForCapture(bool ready);
      void imageSaved(int id, const QString &fileName);
    void processVideoFrame(QVideoFrame frame);

private:

    bool support_native_record=false;

    CoreLib *core;
    MediaLibraryContext *media_context;
    Ui::VideoController *ui;

    QCameraDevice defaultCameraInfo;

    QScopedPointer<QCamera> m_camera_session;
    QScopedPointer<QCamera> m_camera_preview;

//    QScopedPointer<QImageCapture> m_imageCapture;
     QImageCapture *m_imageCapture;
    QScopedPointer<QMediaRecorder> m_mediaRecorder;

    QMediaCaptureSession m_capture_session;
    QMediaCaptureSession m_capture_preview;


//    QImageEncoderSettings m_imageSettings;
//    QAudioEncoderSettings m_audioSettings;
//    QVideoEncoderSettings m_videoSettings;
    QMediaPlayer *player ;
    QAudioOutput *audioOutput;

    QString m_videoContainerFormat;
    bool m_isCapturingImage = false;
    bool m_applicationExiting = false;
    QVariant boxValue(const QComboBox*) const;
    QVideoWidget *preview;

    QVector<QImage> images;

    int capture_counter;

//    QVideoProbe *probe;

    // FFMPEG recording

    bool ffmpeg_recording=false;

    QWebSocketServer *m_pWebSocketServer;


   QVideoSink *sink ;

    QList<QWebSocket *> m_clients;
};

#endif // VIDEOCONTROLLER_H
