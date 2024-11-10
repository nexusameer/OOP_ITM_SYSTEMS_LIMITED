#include "FullTimeEmployee.h"


void FullTimeEmployee::setSalary(int s)
{
    salary = s;
}


void FullTimeEmployee::Transfer()
{
    cout<< "Rs." << salary << " transferred to full time employee" << fname << " " << lname << endl;
}
