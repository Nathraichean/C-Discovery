#pragma once
#include "Account.h"

class Savings_Account : public Account {

public:
	Savings_Account();
	~Savings_Account();

	void deposit(double amount);
	void withdraw(double amount);
};