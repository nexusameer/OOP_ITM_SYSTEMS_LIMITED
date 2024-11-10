#pragma once
#include "Employee.h"
class ProductionWorker :
    public Employee
{
public:
	ProductionWorker();
	~ProductionWorker();

private:
	int shift;
	double hourlyPayRate;
public:
	void setShift(int s);
	int getShift();
	double gethourlyPayRate();
	void setHourlyPayRate(double h);
};

