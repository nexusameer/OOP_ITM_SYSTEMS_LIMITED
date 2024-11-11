#include "FlyingDinosaur.h"

FlyingDinosaur::FlyingDinosaur(string n, int w, int f) : Dinosaur(n, w) {
	flying_speed = f;
}


void FlyingDinosaur::fly(int time)
{
	distance_covered += time * flying_speed;
	cout << name << " is flying\n";
}


void FlyingDinosaur::showDistanceCovered()
{
	cout<<" After some strenuous walking and flying ";
	cout << name << " has covered " << distance_covered << "km\n";
}
