#include "pch.h"
#include "Account.h"
#include <iostream>

Account::Account() {
}

Account::~Account() {
}

void Account::deposit(double amount) {
	std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount) {
	std::cout << "Account withdraw called with " << amount << std::endl;
}
