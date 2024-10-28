#include <iostream>

#include "Wallet.h"
using namespace std;
int main()
{
    Wallet a;
    Wallet b;
    a.initializeWallet(1000);
    b.initializeWallet(1000);
    a.addFunds(500);
    b.addFunds(1000);
    b.deductFunds(200);
    a.giveReward();
    b.giveReward();


    cout << "Wallet A has value funds" << a.getWalletValue()<<endl;
    cout << "Wallet B has value funds" << b.getWalletValue()<<endl;
}

