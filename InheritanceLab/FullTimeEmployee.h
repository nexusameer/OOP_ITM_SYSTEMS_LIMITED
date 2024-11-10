#pragma once
#include "Employee.h"
class FullTimeEmployee :
    public Employee
{
private:
    int salary;

public:
    void setSalary(int s);
    void Transfer();
};

