#ifndef QUESTIONREPOSITORY_H
#define QUESTIONREPOSITORY_H

#include <string>
#include <map>

using namespace std;

class QuestionRepository
{

private:
    QuestionRepository();
    ~QuestionRepository();
    static QuestionRepository* instance;

    map<int, string> question;
    int count;
public:
    static QuestionRepository* getInstance();
    string findById(int questionId);
    unsigned long long countElement();
};

#endif // QUESTIONREPOSITORY_H
