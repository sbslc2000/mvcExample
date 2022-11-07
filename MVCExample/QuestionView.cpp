#include "questionview.h"
#include <iostream>

using namespace std;

QuestionView* QuestionView::instance = nullptr;

QuestionView::QuestionView()
{
    cout << "[System] QuestionView Constructor Start" << endl;
    //mainController = MainController::getInstance();
}

QuestionView* QuestionView::getInstance()
{
    cout << "[System] QuestionView.getInstance start" << endl;
    if (instance == nullptr)
    {
        instance = new QuestionView();
    }
    return instance;
}

void QuestionView::view(string question)
{
    cout << "[System] QuestionView.view start" << endl;
    int result;
    cout << "=========================" << endl;
    cout << "Question" << endl;
    cout << question << endl;
    cout << "Enter 0 to go back main page" << endl;
    cout << "Enter else to exit" << endl;

    cin >> result;


    if (result == 0)
    {
        MainController* mainController = MainController::getInstance();
        mainController->mainHandler();
    }
}
