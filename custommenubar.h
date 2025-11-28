
#ifndef CUSTOMMENUBAR_H
#define CUSTOMMENUBAR_H


#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QMainWindow>
#include <QObject>
#include <QApplication>
#include <QScreen>

class CustomMenuBar : public QMenuBar
{
    Q_OBJECT
public:
    CustomMenuBar();
    CustomMenuBar(QMainWindow *parent);
    ~CustomMenuBar();
private:
    QMenu *screenMenu;
    QMenu *captionMenu;
    QMenu *resizeMenu;

private slots:

};

#endif // CUSTOMMENUBAR_H
