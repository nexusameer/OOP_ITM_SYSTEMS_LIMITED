#include "ProductionWorker.h"


ProductionWorker::ProductionWorker()
{
	shift = 1;
	hourlyPayRate = 0;
	cout<<"ProductionWorker constructor"<<endl;
}
ProductionWorker::~ProductionWorker() {
	cout<<"ProductionWorker destructor"<<endl;
}


int ProductionWorker::getShift()
{
	return shift;
}


void ProductionWorker::setShift(int s)
{
	if (s > 0 && s < 3) {
		shift = s;
	}
}



double ProductionWorker::gethourlyPayRate()
{
    return hourlyPayRate;
}



void ProductionWorker::setHourlyPayRate(double h)
{
	if (h > 0) {
		hourlyPayRate = h;
	}
}
