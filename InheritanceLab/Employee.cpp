#include "Employee.h"
#include <string>


void Employee::setFname(string f)
{
	fname = f;
}


void Employee::setLname(string l)
{
	lname = l;
}


string Employee::getFname()
{
	return fname;
}


string Employee::getLname()
{
	return lname;
}


void Employee::printDetails()
{
	cout<< "First Name: "<<getFname()<<endl;

	cout<< "Last Name: "<<getLname()<<endl;
}
