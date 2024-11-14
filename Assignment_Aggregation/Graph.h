#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
#include "Coordinate.h"
#include "Date.h"

class Graph {
public:
	Graph(int d, string m, int y) : date(d, m, y){
		size = 0;
	}
	void addCoordinates(int x, int y) // [1]
	// adds a coordinate value to the cords and adjusts size
	{
		if (size < 100) {
			coords[size].setX(x);
			coords[size].setY(y);
			size++;
		}
		else {
			cout << "graph is full";
		}
		
	}
	void writeToFile(ofstream& outFile) {
		date.writeToFile(outFile);
		for (int i = 0; i < size; i++) {
			coords[i].writeToFile(outFile);
		}
	}

private:
	int size;
	Coordinate coords[100];
	Date date;
};

