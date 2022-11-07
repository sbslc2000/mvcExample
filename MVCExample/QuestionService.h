#ifndef QUESTIONSERVICE_H
#define QUESTIONSERVICE_H
#include "questionrepository.h"
#include <string.h>
#include <list>

class QuestionService
{

private:
    QuestionRepository* questionRepository;

    QuestionService();
    ~QuestionService();

    static QuestionService* instance;
public:
    static QuestionService* getInstance();
    list<string> getAllQuestion();
    string get(int questionId);
    unsigned long long getTotalElementCount();
};

#endif // QUESTIONSERVICE_H
