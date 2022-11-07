#include <iostream>
#include "maincontroller.h"
#include "mainview.h"
using namespace std;

MainView* MainView::instance = nullptr;

MainView::MainView()
{
    cout << "[System] MainView Constructor Start" << endl;
}

MainView* MainView::getInstance()
{
    cout << "[System] MainView.getInstance start" << endl;
    if (instance == nullptr)
    {
        instance = new MainView();
    }
    return instance;
}

void MainView::view(unsigned long long count)
{
    cout << "[System] MainView.view start" << endl;
    int questionId;
    cout << "=========================" << endl;
    cout << "Total Question Count : " << count << endl;
    cout << "Select Question Number: " << endl << ">>";

    //사용자 입력값
    cin >> questionId;

    MainController* mainController = MainController::getInstance();
    mainController->showQuestionHandler(questionId);

}
