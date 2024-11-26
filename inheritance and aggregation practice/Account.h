#include <iostream>
#include <string>
using namespace std;
#include "PersonalInfo.h"


class Account {
public:
	//double getAmount();
	//void setAmount(double);
	//void print();
	//void setAccountOwner(PersonalInfo);
	//void setAccountNumber(string);
private:
	string account_number;
	PersonalInfo account_owner;
	double amount;
};