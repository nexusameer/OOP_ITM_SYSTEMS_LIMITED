#include "Dinosaur.h"

Dinosaur::Dinosaur(string n, int w)
{
	name = n;
	walking_speed = w;
	distance_covered = 0;
}


void Dinosaur::walk(int time)
{
	distance_covered += time * walking_speed;
	cout << name << " is walking\n";
}


void Dinosaur::showDistanceCovered()
{
	cout << name << " has covered " << distance_covered << "km\n";
}


string Dinosaur::getName()
{
	return name;
}


void Dinosaur::addToDistanceCovered(int d)
{
	distance_covered += d;
}
