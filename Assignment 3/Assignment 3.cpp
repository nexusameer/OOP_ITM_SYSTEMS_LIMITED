#include "Bank.h"
#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int num_accounts = 10;
    Bank accounts[num_accounts];

    for (int i = 0; i < num_accounts; ++i) {
        accounts[i].set_starting_balance(100.0f);
    }

    for (int i = 0; i < num_accounts; i += 2) {
        float deposit_amount;
         cout << "Enter deposit amount for account " << accounts[i].get_account_id() << ": ";
         cin >> deposit_amount;
        accounts[i].deposit(deposit_amount);
    }

    Bank::display_welcome_screen();
     cout << "Account details after deposits:\n";
    for (const auto& account : accounts) {
         cout << "Account ID: " << account.get_account_id() << ", Balance: " << account.get_balance() << "\n";
    }

    for (int i = 0; i < num_accounts; i += 2) {
        float withdraw_amount;
         cout << "Enter withdrawal amount for account " << accounts[i].get_account_id() << ": ";
         cin >> withdraw_amount;
        accounts[i].withdraw(withdraw_amount);
    }

    Bank::display_welcome_screen();
     cout << "Account details after withdrawals:\n";
    for (const auto& account : accounts) {
         cout << "Account ID: " << account.get_account_id() << ", Balance: " << account.get_balance() << "\n";
    }

    Bank extra_account;
    extra_account.set_starting_balance(500.0f);
    extra_account.deposit(150.0f);
    extra_account.withdraw(50.0f);

     cout << "\nExtra account details:\n";
     cout << "Account ID: " << extra_account.get_account_id() << ", Balance: " << extra_account.get_balance() << "\n";

    Bank::display_welcome_screen();

    return 0;
}
