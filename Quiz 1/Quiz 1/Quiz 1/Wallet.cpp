#include "Wallet.h"




void Wallet::initializeWallet(float amount)
{
	balance = balance + amount;
}


void Wallet::addFunds(float amount)
{
	balance = balance + amount;
}


float Wallet::deductFunds(float amount)
{
	if (amount < balance) {
		balance = balance - amount;
		
	}
	return balance;
	
}





float Wallet::getWalletValue()
{
	// TODO: Add your implementation code here.
	return balance;
}


void Wallet::giveReward()
{
	balance = balance + balance * 0.01;
}
