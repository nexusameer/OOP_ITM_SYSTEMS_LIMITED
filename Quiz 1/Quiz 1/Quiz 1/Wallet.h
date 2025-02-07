#pragma once
class Wallet

{
private:
	float balance=0.0;

public:
	void initializeWallet(float amount);
	void addFunds(float amount);
	float deductFunds(float amount);
	float getWalletValue();
	void giveReward();
};

