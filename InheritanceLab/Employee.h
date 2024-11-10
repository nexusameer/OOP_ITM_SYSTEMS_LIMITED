#pragma once
#include <string>
#include<iostream>
using namespace std;

class Employee
{

protected:
	string fname;
	string lname;
public:

	void setFname(string f);
	void setLname(string l);
	string getFname();
	string getLname();
	void printDetails();
};

