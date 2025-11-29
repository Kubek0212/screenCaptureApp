
#ifndef CUSTOMMENUBAR_H
#define CUSTOMMENUBAR_H


#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QMainWindow>
#include <QObject>
#include <QApplication>
#include <QScreen>
#include <screencapture.h>

class CustomMenuBar : public QMenuBar
{
    Q_OBJECT
public:
    CustomMenuBar();
    CustomMenuBar(QMainWindow *parent);
    ~CustomMenuBar();

    void populateScreenMenu();
    void setScreenCapture(ScreenCapture *sC);
private:
    QMenu *screenMenu;
    QMenu *captionMenu;
    QMenu *resizeMenu;

    ScreenCapture *screenCapture;

private slots:
    void testSlot();
};

#endif // CUSTOMMENUBAR_H
