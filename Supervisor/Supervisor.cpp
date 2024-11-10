// main.cpp
#include<iostream>
using namespace std;    
#include "ShiftSupervisor.h"

int main() {
    // Create a shift supervisor object
    ShiftSupervisor supervisor("John Doe", "12345", "2024-01-01", 75000.0, 5000.0);

    // Display supervisor information
    cout << "\nSupervisor Information:" << endl;
    cout << "Name: " << supervisor.getName() << endl;
    cout << "Employee Number: " << supervisor.getNumber() << endl;
    cout << "Hire Date: " << supervisor.getHireDate() << endl;
    cout << "Annual Salary: " << supervisor.getAnnualSalary() << endl;
    cout << "Annual Bonus: " << supervisor.getAnnualBonus() << endl;

    // Total annual compensation
    double totalCompensation = supervisor.getAnnualSalary() + supervisor.getAnnualBonus();
    cout << "Total Annual Compensation: " << totalCompensation << endl;

    // Demonstrate modifying the bonus (e.g., after meeting production goals)
    supervisor.setAnnualBonus(7500.0);
    cout << "\nAfter production goals met:" << endl;
    cout << "Updated Annual Bonus: " << supervisor.getAnnualBonus() << endl;
    cout << "Updated Total Compensation: "
        << supervisor.getAnnualSalary() + supervisor.getAnnualBonus() << endl;

    // Demonstrate employee count (if you implemented the static counter)
    cout << "\nTotal Employees: " << Employee::getEmployeeCount() << endl;

    return 0;
}