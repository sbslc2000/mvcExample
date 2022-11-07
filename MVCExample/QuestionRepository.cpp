#include "questionrepository.h"
#include "string.h"
#include <iostream>

QuestionRepository* QuestionRepository::instance = nullptr;

QuestionRepository::QuestionRepository()
{
    std::cout << "[System] QuestionRepository Constructor start" << std::endl;
    question.insert({ 1,"What is C++" });
    question.insert({ 2,"What is OOP?" });
    question.insert({ 3,"What is Inheritance?" });
}

QuestionRepository* QuestionRepository::getInstance() {
    cout << "[System] QuestionRepository.getInstance() start" << endl;
    if (instance == nullptr) {
        instance = new QuestionRepository();
    }
    return instance;
}

unsigned long long QuestionRepository::countElement() {
    cout << "[System] QuestionRepository.countElement() start" << endl;
    return question.size();
}


string QuestionRepository::findById(int questionId)
{
    std::cout << "[System] QuestionRepository.findById start" << std::endl;

    if (question.find(questionId) != question.end()) {
        for (auto iter = question.begin(); iter != question.end(); iter++)
        {
            if (iter->first == questionId)
                return iter->second;
        }
    }
    else {
        return NULL;
    }

}




