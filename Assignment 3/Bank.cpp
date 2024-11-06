#include "Bank.h"
#include <iomanip>
using namespace std;

int Bank::account_counter = 0;
std::string Bank::bank_name = "Best Bank";

Bank::Bank() : balance(0.0) {
    account_counter++;
    account_number = "ACC" + std::string(account_counter < 10 ? "00" : "0") + std::to_string(account_counter);
}


void Bank::set_starting_balance(float amount) {
    balance = amount;
}

void Bank::deposit(float amount) {
    if (amount > 0) {
        balance += amount;
    }
    else {
        cout << "Deposit amount must be positive.\n";
    }
}

void Bank::withdraw(float amount) {
    if (amount > balance) {
        cout << "Insufficient funds to withdraw " << amount << ".\n";
    }
    else {
        balance -= amount;
    }
}

float Bank::get_balance() const {
    return balance;
}

std::string Bank::get_account_id() const {
    return account_number;
}

void Bank::display_welcome_screen() {
    cout << "Welcome to " << bank_name << ". Serving " << account_counter << " customers all over the world.\n";
}
