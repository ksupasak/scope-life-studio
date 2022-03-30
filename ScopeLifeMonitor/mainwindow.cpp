#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


      qDebug()<<"OK";
    connect(&m_webSocket, &QWebSocket::connected, this, &MainWindow::onConnected);
//    connect(&m_webSocket, &QWebSocket::disconnected, this, &MainWindow::closed);
    m_webSocket.open(QUrl("ws://127.0.0.1:4756"));

}

MainWindow::~MainWindow()
{
    delete ui;
}



//! [onConnected]
void MainWindow::onConnected()
{
    if (true)
        qDebug() << "WebSocket connected";
    connect(&m_webSocket, &QWebSocket::textMessageReceived,
            this, &MainWindow::onTextMessageReceived);

    connect(&m_webSocket, &QWebSocket::binaryMessageReceived,
            this, &MainWindow::processBinaryMessage);


}
//! [onConnected]

//! [onTextMessageReceived]
void MainWindow::onTextMessageReceived(QString message)
{
//    if (true)
//        qDebug() << "Message received:" << message;
//    m_webSocket.close();
    qDebug() << "Binatttry Message received:" << message.size();

}
//! [onTextMessageReceived]


//! [processBinaryMessage]
void MainWindow::processBinaryMessage(QByteArray message)
{
    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
    if (true)
        qDebug() << "Binary Message received:" << message.size();


        image.loadFromData(message,"png");
        image.scaled(ui->view1->size(),Qt::KeepAspectRatio,
                                            Qt::SmoothTransformation);

        ui->view1->setPixmap(QPixmap::fromImage(image));



//        qDebug()<<image;

//        ui->view1->setPixmap(QPixmap::fromImage(image));
//        ui->view1->setPicture(image);


}
//! [processBinaryMessage]

void MainWindow::on_pushButton_clicked()
{
    m_webSocket.sendTextMessage(QStringLiteral("GET"));

}


