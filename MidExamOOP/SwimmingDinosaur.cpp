#include "SwimmingDinosaur.h"


SwimmingDinosaur::SwimmingDinosaur(string n, int w, int s) : Dinosaur(n, w) {
	swimming_speed = s;

}


void SwimmingDinosaur::swim(int time)
{
	distance_covered += time * swimming_speed;
	cout << name << " is swimming\n";
}


void SwimmingDinosaur::showDistanceCovered()
{
	cout<<"After some outstanding walking and swimming, ";
	cout << name << " has covered " << distance_covered << "km\n";
}
