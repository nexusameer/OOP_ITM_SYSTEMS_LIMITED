#pragma once
#include <iostream>
using namespace std;

class Employee
{
public:
	Employee();
	Employee(string name, string hire_date, string number);
	~Employee();
	string getName();
	string getNumber();
	string getHireDate();
	void setName(string n);
	void setNumber(string num);
	void setHireDate(string hd);

	static int getEmployeeCount();
private:
	static int employeeCount;
	string name;
	string hire_date;
	string number;
	
};

