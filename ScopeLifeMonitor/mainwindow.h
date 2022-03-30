#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

Q_SIGNALS:
//    void closed();

private Q_SLOTS:
    void onConnected();
    void onTextMessageReceived(QString message);
    void processBinaryMessage(QByteArray message);
    void on_pushButton_clicked();

private:
    QWebSocket m_webSocket;
    QImage image;
    QUrl m_url;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
