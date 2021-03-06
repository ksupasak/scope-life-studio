#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// soup
#include <QMainWindow>
#include <QWebEnginePage>
#include "stationwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setUrl(QUrl url);

private slots:
    void openStationWindow();
    void openDVRWindow();
    void openTeleWindow();
    void consoleMessage(QWebEnginePage::JavaScriptConsoleMessageLevel level, const QString &message);

private:
    Ui::MainWindow *ui;


     StationWindow *tele_window=NULL;
     StationWindow *station_window=NULL;
     StationWindow *dvr_window=NULL;


   virtual bool	event(QEvent *event) override;

};
#endif // MAINWINDOW_H
