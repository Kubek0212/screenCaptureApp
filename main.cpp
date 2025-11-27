
#include <QCoreApplication>
#include <QApplication>
#include <QLabel>

#include <QScreenCapture>

#include <mainwindow.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow screenCaptureWindow;
    screenCaptureWindow.show();
    return app.exec();
}
