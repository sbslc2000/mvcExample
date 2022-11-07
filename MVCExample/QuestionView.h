#ifndef QUESTIONVIEW_H
#define QUESTIONVIEW_H
#include "maincontroller.h"
#include <string>


class QuestionView
{


private:
    //MainController* mainController;

    QuestionView();
    ~QuestionView();

    static QuestionView* instance;
public:

    static QuestionView* getInstance();

    void view(std::string question);

};

#endif // QUESTIONVIEW_H
