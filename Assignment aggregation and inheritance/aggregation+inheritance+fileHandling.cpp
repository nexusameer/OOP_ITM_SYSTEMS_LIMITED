#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class PersonalInfo {
public:
    void setfname(string fn) {
        fname = fn;
    }
    void setlname(string ln) {
        lname = ln;
    }
    string getfname() {
        return fname;
    }
    string getlname() {
        return lname;
    }
protected:
    string fname;
    string lname;
};

class Account {
protected:
    string account_number;
    PersonalInfo account_owner;
    double amount;
public:
    double getAmount() {
        return amount;
    }
    void setAmount(double am) {
        amount = am;
    }
    void setAccountOwner(PersonalInfo ao) {
        account_owner = ao;
    }
    void setAccountNumber(string an) {
        account_number = an;
    }
};

class SavingsAccount : public Account {
public:
    void setInfo(string an, string fn, string ln, double am, float pr) {
        account_number = an;
        account_owner.setfname(fn);
        account_owner.setlname(ln);
        amount = am;
        profit_rate = pr;
    }
    void applyProfit() {
        amount += amount * profit_rate;
    }
    void print(ostream& out) {
        out << account_owner.getfname() << " "
            << account_owner.getlname() << " "
            << account_number << " "
            << amount << " "
            << profit_rate << endl;
    }
private:
    float profit_rate;
};

class Bank {
public:
    Bank() : num_of_accounts(0) {}

    void getAccountsInfoFromFile(string filename) {
        ifstream infile(filename);
        if (!infile) {
            cout << "Error: File not found!" << endl;
            return;
        }
        string fname, lname, account_number;
        double amount;
        float profit_rate;
        while (infile >> fname >> lname >> account_number >> amount >> profit_rate) {
            accounts[num_of_accounts].setInfo(account_number, fname, lname, amount, profit_rate);
            num_of_accounts++;
        }
        infile.close();
    }

    void applyYearEndProfit() {
        for (int i = 0; i < num_of_accounts; i++) {
            accounts[i].applyProfit();
        }
    }

    void printAccounts(ostream& out) {
        out << "Firstname Lastname AccountNumber Amount(new) ProfitRate" << endl;
        for (int i = 0; i < num_of_accounts; i++) {
            accounts[i].print(out);
        }
    }

private:
    int num_of_accounts;
    SavingsAccount accounts[100];
};

int main() {
    // Step 1: Create a bank object
    Bank bank;

    // Step 2: Read account information from file
    bank.getAccountsInfoFromFile("accounts.txt");

    // Step 3: Calculate updated amounts after annual profit calculation
    bank.applyYearEndProfit();

    // Step 4: Print updated account information to console
    bank.printAccounts(cout);

    // Step 5: Write updated account information to an output file
    ofstream outfile("updated_accounts.txt");
    if (outfile) {
        bank.printAccounts(outfile);
        outfile.close();
        cout << "Updated account information written to 'updated_accounts.txt'." << endl;
    }
    else {
        cout << "Error: Could not open output file!" << endl;
    }

    return 0;
}
