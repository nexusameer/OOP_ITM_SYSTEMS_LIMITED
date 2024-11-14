#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
#include "Coordinate.h"
#include "Date.h"


class Coordinate {
public:
	Coordinate() {
		x = 0;
		y = 0;
	}
	void setX(int xval) {
		x = xval;
	}
	void setY(int yval) {
		y = yval;
	}
	void writeToFile(ofstream &outFile) {
		outFile << "(" << x << " , " << y << ")\n";
	}

private:
	int x;
	int y;
};