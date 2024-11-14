#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
#include "Coordinate.h"
#include "Date.h"

class Date {
public:
	Date(int d, string m, int y) {
		day = d;
		month = m;
		year = y;
	}
	void writeToFile(ofstream &outFile) {
		outFile << day << " " << month << " " << year << "\n";
	}
private:
	int day;
	string month;
	int year;
};