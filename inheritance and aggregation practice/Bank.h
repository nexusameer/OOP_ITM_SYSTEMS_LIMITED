#include <iostream>
#include <string>
using namespace std;
#include "SavingAccount.h"

class Bank {
public:
	Bank(); // init number of accounts to zero
	//void getAccountsInfoFromFile(string);
	//void applyYearEndProfit();
	//void printAccounts();
private:
	int num_of_accounts;
	SavingsAccount accounts[100];
};