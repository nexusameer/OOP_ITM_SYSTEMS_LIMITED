#pragma once
#include "Point.h"
#include "iostream"
using namespace std;
class Polygon
{
public:
	Point* pointer;
	Polygon(int n);
	int n;
	void print();
	~Polygon();
	Polygon(const Polygon& other);
};

