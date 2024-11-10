#include "PartTimeEmployee.h"


void PartTimeEmployee::setHourRate(int hr)
{
	hour_rate = hr;
}


void PartTimeEmployee::makePayment(int h)
{
	int pay = h * hour_rate;
	cout << "Paid Rs." << pay << " for " << h << " hours of work." << endl;
	cout<< fname << " " << lname << endl;
}
