#ifndef MAINVIEW_H
#define MAINVIEW_H

#include "maincontroller.h"


class MainView
{

private:

    MainView();
    ~MainView();

    static MainView* instance;
public:

    static MainView* getInstance();

    void view(unsigned long long count);
};

#endif // MAINVIEW_H
