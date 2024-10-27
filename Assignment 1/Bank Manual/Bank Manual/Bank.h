#pragma once

class Bank
{
    static int nextAccount;  

public:
    void set_starting_balance(double balance);
    double deposit(double amount);
    double withdraw(double amount);
    double get_balance();

private:
    double balance = 0;
    int account_no;
};
