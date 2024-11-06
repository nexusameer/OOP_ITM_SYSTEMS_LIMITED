#pragma once
#include <string>
#include <iostream>
using namespace std;
class Bank
{
public:
    Bank();
    void set_starting_balance(float amount);
    void deposit(float amount);
    void withdraw(float amount);
    float get_balance() const;
    string get_account_id() const;
    static void display_welcome_screen();

private:
    string account_number;
    float balance;
    static int account_counter;
    static string bank_name;

};