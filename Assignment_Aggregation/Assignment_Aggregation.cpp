// Assignment_Aggregation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <fstream>
#include "Graph.h"
#include "Coordinate.h"


int main()
{
	string name, month;
	int day, year, x, y, choice;
	cout << "Enter a file Name: " << endl;
	cin >> name;



	cout << "Enter a day: " << endl;
	cin >> day;
	cout << "Enter a year: " << endl;
	cin >> year;
	cout << "Enter a month: " << endl;
	cin >> month;

	Graph graph(day, month, year);

	do
	{
		cout << "Enter a x cordinates: " << endl;
		cin >> x;
		cout << "Enter a y cordinates: " << endl;
		cin >> y;
		graph.addCoordinates(x, y);
		cout << "to continue press 1 to exit press 0" << endl;
		cin >> choice;
	} while (choice != 0);


	ofstream outFile(name);
	if (outFile.is_open()) {
		graph.writeToFile(outFile);
		outFile.close();
		cout << "Graph Coordinates successfully." << endl;

	}
	else {
		cout << "Error opening File";
	}

	return 0;
}