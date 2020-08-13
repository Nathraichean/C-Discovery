
#include "pch.h"
#include <iostream>
#include <string>
#include "Account.h"
using namespace std;


int main()
{
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000.0);

	if (frank_account.deposit(200.0))
		cout << "Deposit: OK\n";
	else
		cout << "Deposit not allowed\n";

	if (frank_account.withdraw(500.0))
		cout << "Withdrawal: OK\n";
	else
		cout << "You don't have 500.0 in your balance. You have : " << frank_account.get_balance() << endl;

	if (frank_account.withdraw(1500.0))
		cout << "Withdrawal: OK\n";
	else
		cout << "You don't have 1500.0 in your balance. You have : " << frank_account.get_balance() << endl;

}

