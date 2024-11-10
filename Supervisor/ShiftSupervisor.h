// ShiftSupervisor.h
#pragma once
#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    // Constructors
    ShiftSupervisor();
    ShiftSupervisor(string name, string number, string hire_date,
        double salary, double bonus);

    // Destructor
    ~ShiftSupervisor();

    // Accessor functions
    double getAnnualSalary() const;
    double getAnnualBonus() const;

    // Mutator functions
    void setAnnualSalary(double salary);
    void setAnnualBonus(double bonus);
};