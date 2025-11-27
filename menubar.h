
#ifndef MENUBAR_H
#define MENUBAR_H


#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QMainWindow>

class MenuBar : public QMenuBar
{
public:
    MenuBar();
    MenuBar(QMainWindow *parent);
    ~MenuBar();
};

#endif // MENUBAR_H
