#include <iostream>
#include "Employee.h"
using namespace std;
void Fun(int size, Employee emp[], int &sum) {
	
	for (int i = 0; i < size; i++) {
		double salary, per;
		cout << "enter your salary: ";
		cin >> salary;
		emp[i].setSalary(salary);
		double a = emp[i].getSalary();
		cout << "orignal salary : " << a << endl;

		cout << "Enter Increment : ";
		cin >> per;
		emp[i].incrementSalary(per);
		a = emp[i].getSalary();
		cout << "Updated salary : " << a << endl;
		sum = sum + emp[i].getSalary();
	}
}
int main()
{	
	int size, sum=0;
	cout << "Enter size of your company: ";
	cin >> size;
	Employee* emp = new Employee[size];
	Fun(size, emp, sum);
	
	cout << "total expenditure of company is : " << sum;

	delete[] emp;
	

	return 0;



}
