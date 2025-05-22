#pragma once
#include <string>
#include <iostream>
using namespace std;

class Game {
protected:
    string title;
public:
    Game(string t) : title(t) {}
    virtual bool play() = 0;
    virtual ~Game() {}
    string getTitle() { return title; }
};
