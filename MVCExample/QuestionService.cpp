#include "questionservice.h"

#include <iostream>
#include <list>
#include <string>

using namespace std;

QuestionService* QuestionService::instance = nullptr;

QuestionService::QuestionService()
{
    std::cout << "[System] QuestionService Constructor start" << std::endl;
    this->questionRepository = QuestionRepository::getInstance();
}

QuestionService* QuestionService::getInstance() {
    cout << "[System] QuestionService.getInstance() start" << endl;
    if (instance == nullptr) {
        instance = new QuestionService();
    }
    return instance;
}

list<string> QuestionService::getAllQuestion() {

    int i = 0;
    list<string> result;
    string questionValue;

    while (true) {
        questionValue = questionRepository->findById(i);
        if (questionValue.empty()) {
            break;
        }

        result.push_back(questionValue);
        i++;
    }

    return result;
}

string QuestionService::get(int questionId) {
    cout << "[System] QuestionService.get() start" << endl;
    string question = questionRepository->findById(questionId);
    return question;
}

unsigned long long QuestionService::getTotalElementCount() {
    cout << "[System] QuestionService.getTotalElementCount() start" << endl;
    return questionRepository->countElement();
}
