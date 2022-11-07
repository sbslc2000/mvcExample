#include "maincontroller.h"
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    MainController* controller;
    controller = MainController::getInstance();

    controller->start();


    return 0;
}
