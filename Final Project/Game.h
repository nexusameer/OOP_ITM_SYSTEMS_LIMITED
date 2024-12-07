#pragma once
#include <iostream>
using namespace std;
#include<string>

class Game
{
public:
	Game(string t) {
		title = t;
	}
	virtual void play() = 0;
protected:
	string title;
};

