#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include "questionservice.h"
class MainView;
class QuestionView;

class MainController
{
private:
    QuestionService* questionService;
    MainView* mainView;
    QuestionView* questionView;


    MainController();
    ~MainController();

    static MainController* instance;
public:

    static MainController* getInstance();

    void start();
    void mainHandler();
    void showQuestionHandler(int questionId);
};

#endif // MAINCONTROLLER_H
