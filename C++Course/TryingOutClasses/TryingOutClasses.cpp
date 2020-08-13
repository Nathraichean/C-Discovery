// **************************************
// bad practices, learning purposes only
// **************************************

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Player {
public: //temp
	//attr.
	string name;
	int health;
	int xp;

	//methods
	void talk(string text_to_say) { 
		cout << name << " says " << text_to_say << endl;
	};
	bool is_dead();
};

class Account {
public: //temp
	//attr.
	string name;
	double balance;

	//methods
	bool deposit(double bal) {
		balance += bal;
		cout << "Depositing " << bal << ". Current : " << balance << endl;
		return true;
	};
	bool withdraw(double bal) {
		balance -= bal;
		cout << "Withdrawing "<< bal << ". Current : " << balance << endl;
		return true;
	};
	void print_balance() {
		cout << "Current balance for " << name << " is " << balance << endl;
	}
};


int main()
{	
	Account frank_account;
	frank_account.name = "Frank";
	frank_account.balance = 5000.0;
	frank_account.deposit(1000.0);
	frank_account.withdraw(500.0);
	frank_account.print_balance();

	cout << endl;

	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	frank.talk("Hi There");

	cout << endl;

	Player* enemy = new Player;
	(*enemy).name = "Enemy";
	enemy->health = 100;
	(*enemy).xp = 15;
	enemy->talk("I will destroy you!\n");
	
}

// **************************************
// bad practices, learning purposes only
// **************************************
