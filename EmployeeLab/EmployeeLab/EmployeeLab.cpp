#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
	Employee employee1;
	employee1.setSalary(10000);
	double a=employee1.getSalary();
	cout << "orignal salary : " << a << endl;
	employee1.incrementSalary(1.12);
	a = employee1.getSalary();
	cout << "Updated salary : " << a << endl;
}
