#pragma once
#include "Game.h"
class MathChallenge :
    public Game
{
public:
    MathChallenge() : Game("Math Challenge") {
    }
    void play() override {
        cout << "Playing with " << title << endl;
        srand(time(0));
        int num1 = rand() % 100;
        int num2 = rand() % 100;
        char op_array[] = { '+', '-', '*', '/' };
        char selectedOperator = op_array[rand() % 4];

        int correctanswer;
        if (selectedOperator == '+') {
            correctanswer = num1 + num2;
        }
        else if (selectedOperator == '-') {
            correctanswer = num1 - num2;
        }
        else if (selectedOperator == '*') {
            correctanswer = num1 * num2;
        }
        else if (selectedOperator == '/') {
            correctanswer = num1 / num2;
        }
        cout << "solve : " << num1 << " " << selectedOperator << " " << num2 << endl;
        int userAns;
        cout << "Enter your answer: " << endl;
        cin >> userAns;
        if (userAns == correctanswer) {
            cout << "you have earned a badge: " << endl;
        }
        else {
            cout << "Wrong: The correct answer was : " << correctanswer << endl;
        }
        char option;
        cout << "Do you wanna play again: (y/Y)" << endl;
        cin >> option;
        if (option == 'Y' || option == 'y') {
            play();
        }
    }
private:
    int num1;
    int num2;
};

