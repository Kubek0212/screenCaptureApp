
#ifndef SCREENCAPTURE_H
#define SCREENCAPTURE_H


#include <QWidget>
#include <QVideoWidget>
#include <QMainWindow>
#include <QScreenCapture>
#include <QMediaCaptureSession>
#include <QApplication>

class ScreenCapture : public QVideoWidget
{
public:
    ScreenCapture();
    ScreenCapture(QMainWindow *parent);
    ~ScreenCapture();

private:
    QMediaCaptureSession *session;
    QScreenCapture *screenCapture;
};

#endif // SCREENCAPTURE_H
