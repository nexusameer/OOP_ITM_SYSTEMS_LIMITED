#include <iostream>
#include "Bank.h"

using namespace std;

int main() {
    double b, d, w;
    int n = 0;

    cout << "Enter Your Initial Balance: ";
    cin >> b;

    Bank c1;
    c1.set_starting_balance(b);
    cout << "Starting balance set to: " << b << endl;

    while (n != 4) {
        cout << "\nMenu:\n";
        cout << "1. Deposit Amount\n";
        cout << "2. Withdraw Amount\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> n;

        if (n == 1) {
            cout << "Enter deposit amount: ";
            cin >> d;
            c1.deposit(d);
            cout << "Deposit successful. Your balance is " << c1.get_balance() << endl;
        }
        else if (n == 2) {
            cout << "Enter withdraw amount: ";
            cin >> w;
            if (w > c1.get_balance()) {
                cout << "Insufficient funds. Withdrawal failed." << endl;
            }
            else {
                c1.withdraw(w);
                cout << "Withdrawal successful. Your balance is " << c1.get_balance() << endl;
            }
        }
        else if (n == 3) {
            cout << "Your balance is: " << c1.get_balance() << endl;
        }
        else if (n == 4) {
            cout << "Exiting..." << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
