#include "Bank.h"

int Bank::nextAccount = 1;  // Define the static variable

void Bank::set_starting_balance(double b) {
    balance = b;
    account_no = nextAccount++;
}

double Bank::deposit(double d) {
    balance += d;
    return balance;
}



double Bank::withdraw(double w) {
    if (w <= balance) {
        balance -= w;
    }
    return balance;
}

double Bank::get_balance() {
    return balance;
}
