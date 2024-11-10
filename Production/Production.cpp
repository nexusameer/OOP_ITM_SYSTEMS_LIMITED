#include <iostream>
using namespace std;
#include "ProductionWorker.h"
#include "Employee.h"
int main()
{
	ProductionWorker worker;

	worker.setName("Ameer Hamza");
	worker.setShift(2);
	worker.setNumber("03017009220");

	worker.setShift(1);
	worker.setHourlyPayRate(250);

	cout<<"Name: "<<worker.getName()<<endl;
	cout<<"Shift: "<<worker.getShift()<<endl;
	cout<<"Number: "<<worker.getNumber()<<endl;
	cout<<"Hourly Pay Rate: "<<worker.gethourlyPayRate()<<endl;
	cout << "Current employee count: " << Employee::getEmployeeCount() << endl;

	ProductionWorker worker1;

	worker.setName("Ameer Hamza");
	worker.setShift(2);
	worker.setNumber("03017009220");

	worker.setShift(1);
	worker.setHourlyPayRate(250);

	cout << "Name: " << worker.getName() << endl;
	cout << "Shift: " << worker.getShift() << endl;
	cout << "Number: " << worker.getNumber() << endl;
	cout << "Hourly Pay Rate: " << worker.gethourlyPayRate() << endl;
	cout << "Current employee count: " << Employee::getEmployeeCount() << endl;


	return 0;
}