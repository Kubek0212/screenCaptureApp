
#ifndef SCREENCAPTURE_H
#define SCREENCAPTURE_H


#include <QWidget>
#include <QVideoWidget>
#include <QMainWindow>
#include <QScreenCapture>
#include <QMediaCaptureSession>
#include <QApplication>
#include <QObject>
#include <QMessageBox>

class ScreenCapture : public QVideoWidget
{
    Q_OBJECT
public:
    ScreenCapture();
    ScreenCapture(QMainWindow *parent);
    ~ScreenCapture();

private:
    QMediaCaptureSession *session;
    QScreenCapture *screenCapture;

public slots:
    void setScreenOnDisplay(QScreen *screen);
};

#endif // SCREENCAPTURE_H
