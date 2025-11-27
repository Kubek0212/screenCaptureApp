
#ifndef SCREENCAPTUREAPPH_H
#define SCREENCAPTUREAPPH_H

#include <QMainWindow>
#include <QScreen>
#include <QObject>
#include <QWidget>
#include <QMenuBar>
#include <QAction>
#include <QVBoxLayout>

#include <QVideoWidget>

#include <menubar.h>

class ScreenCaptureWindow : public QMainWindow
{
public:
    ScreenCaptureWindow();

private:
    QList<QScreen> browserAvaliableScreens();
};

#endif // SCREENCAPTUREAPPH_H
