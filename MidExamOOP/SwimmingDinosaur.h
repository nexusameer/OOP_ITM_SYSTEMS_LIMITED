#pragma once
#include<iostream>
using namespace std;
#include "Dinosaur.h"

class SwimmingDinosaur :

	public Dinosaur
{
public:
	SwimmingDinosaur(string, int, int);
	void swim(int time);
	void showDistanceCovered();
private:
	int swimming_speed;
};

