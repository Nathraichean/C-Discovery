#include "pch.h"
#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{
    // Use the Account class
	cout << "===Account============\n";

	Account acc{};
	acc.deposit(2000);
	acc.withdraw(500);

	cout << endl;

	Account *p_acc{nullptr};
	p_acc = new Account();
	p_acc->deposit(350);
	p_acc->withdraw(100);
	delete p_acc;

	cout << "=== Savings Account ======\n";
	Savings_Account sav_acc{};
	sav_acc.deposit(2000);
	sav_acc.withdraw(500);

	cout << endl;

	Savings_Account* p_sav_acc{nullptr};
	p_sav_acc = new Savings_Account;
	p_sav_acc->deposit(350);
	p_sav_acc->withdraw(100);
	delete p_sav_acc;

	cout << "===============================\n";



}