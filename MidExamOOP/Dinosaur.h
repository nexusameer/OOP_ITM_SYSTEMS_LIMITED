#pragma once
#include <iostream>
using namespace std;
#include <string>

class Dinosaur
{
public:

	Dinosaur(string, int);
	void walk(int time);
	void showDistanceCovered();
	
	string getName();
protected:
	void addToDistanceCovered(int);
	string name;
	int walking_speed;
	int distance_covered;
};

