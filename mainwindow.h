
#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <custommenubar.h>
#include <screencapture.h>
#include <QVideoWidget>
#include <QScreenCapture>
#include <QMediaCaptureSession>
#include <QApplication>

class MainWindow : public QMainWindow
{
public:
    MainWindow();
private:
    CustomMenuBar *menuBar;
    ScreenCapture *screenCapture;
};

#endif // MAINWINDOW_H
