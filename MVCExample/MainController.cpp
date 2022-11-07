#include "maincontroller.h"
#include "mainview.h"
#include "questionview.h"
#include <string.h>
#include <iostream>
#include <map>
using namespace std;

MainController* MainController::instance = nullptr;

MainController::MainController() {
    cout << "[System] MainController Constructor start" << endl;
    this->questionService = QuestionService::getInstance();
    this->mainView = MainView::getInstance();
    this->questionView = QuestionView::getInstance();
}

MainController* MainController::getInstance() {
    cout << "[System] MainController.getInstance() start" << endl;
    if (instance == nullptr)
        instance = new MainController();
    return instance;
}

void MainController::start() {
    cout << "[System] MainController.start start" << endl;
    mainHandler();
}

void MainController::mainHandler() {
    cout << "[System] MainController.mainHandler() start" << endl;

    unsigned long long count = questionService->getTotalElementCount();
    mainView->view(count);
}

void MainController::showQuestionHandler(int questionId) {
    cout << "[System] MainController.showQuestionHandler() start" << endl;
    string question = questionService->get(questionId);

    questionView->view(question);
}
