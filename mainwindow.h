
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <custommenubar.h>
#include <screencapture.h>
#include <QVideoWidget>
#include <QScreenCapture>
#include <QMediaCaptureSession>
#include <QApplication>
#include <QGuiApplication>
#include <QObject>
#include <QScreen>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow();
    ~MainWindow();
private:
    CustomMenuBar *menuBar;
    ScreenCapture *screenCapture;
private slots:
    void onScreenAdded(QScreen *screen);
    void onScreenRemoved(QScreen *screen);
    void testTest();
};

#endif // MAINWINDOW_H
