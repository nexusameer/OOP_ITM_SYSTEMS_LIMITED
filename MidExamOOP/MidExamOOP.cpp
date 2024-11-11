// MidExamOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "FlyingDinosaur.h"
#include "SwimmingDinosaur.h"
#include "Dinosaur.h"

int main()
{
    /*Create a flying dinosaur named Barney, with walking speed 5km / h and flying speed
        100km / h[2]
        a.Make Barney walk for 5 hours
        b.Make Barney fly for 10 hours
        c.Show the distance covered by Barney*/

    FlyingDinosaur barney("Barney", 5, 100);
	barney.walk(5);
	barney.fly(10);
	barney.showDistanceCovered();

    /*Create a swimming dinosaur named Rex, with walking speed 2km / h and swimming
        speed 10km / h[2]
        a.Make Rex walk for 5 hours
        b.Make Rex swim for 10 hours
        c.Show the distance covered by Barney*/

	SwimmingDinosaur rex("Rex", 2, 10);
	rex.walk(5);
	rex.swim(10);
	rex.showDistanceCovered();
}