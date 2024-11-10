#pragma once
#include "Employee.h"
class PartTimeEmployee :
    public Employee
{
private:
    int hour_rate;
public:
    void setHourRate(int hr);
    void makePayment(int h);
};

