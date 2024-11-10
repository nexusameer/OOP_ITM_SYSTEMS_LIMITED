#include <iostream>
using namespace std;
#include "Employee.h"
#include "PartTimeEmployee.h"
#include "FullTimeEmployee.h"
int main()
{
    FullTimeEmployee f;
    f.setFname("Muhammad");
    f.setLname("Ameer");
    f.setSalary(10000);
    f.printDetails();
    f.Transfer();

    PartTimeEmployee p;
    p.setFname("Muhammad");
    p.setLname("Ali");
    p.setHourRate(10);
    p.printDetails();
	p.makePayment(5);
    

}
