#include "Employee.h"


void Employee::setSalary(double s)
{
	salary = s;
}


double Employee::getSalary()
{
	// TODO: Add your implementation code here.
	return salary;
}


void Employee::incrementSalary(double per)
{
	salary = salary + (per / 100 * salary);
}
