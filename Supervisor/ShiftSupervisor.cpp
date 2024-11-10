// ShiftSupervisor.cpp
#include "ShiftSupervisor.h"

// Default constructor
ShiftSupervisor::ShiftSupervisor() {
    annualSalary = 0.0;
    annualBonus = 0.0;
    cout << "ShiftSupervisor constructor called" << endl;
}

// Parameterized constructor
ShiftSupervisor::ShiftSupervisor(string name, string number, string hire_date,
    double salary, double bonus)
    : Employee(name, number, hire_date) {
    annualSalary = salary;
    annualBonus = bonus;
    cout << "ShiftSupervisor parameterized constructor called" << endl;
}

// Destructor
ShiftSupervisor::~ShiftSupervisor() {
    cout << "ShiftSupervisor destructor called" << endl;
}

// Accessor functions
double ShiftSupervisor::getAnnualSalary() const {
    return annualSalary;
}

double ShiftSupervisor::getAnnualBonus() const {
    return annualBonus;
}

// Mutator functions
void ShiftSupervisor::setAnnualSalary(double salary) {
    if (salary >= 0) {
        annualSalary = salary;
    }
    else {
        cout << "Error: Salary cannot be negative" << endl;
    }
}

void ShiftSupervisor::setAnnualBonus(double bonus) {
    if (bonus >= 0) {
        annualBonus = bonus;
    }
    else {
        cout << "Error: Bonus cannot be negative" << endl;
    }
}