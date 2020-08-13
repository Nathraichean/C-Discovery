
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num_of_cents{ 0 };

	int num_of_dollars{ 0 };
	int dollar_value{ 100 };

	int num_of_quarters{ 0 };
	int quarter_value{ 25 };

	int num_of_dimes{ 0 };
	int dime_value{ 10 };

	int num_of_nickels{ 0 };
	int nickel_value{ 5 };

	int num_of_pennies{ 0 };

	cout << "Enter an amount in cents: ";
	cin >> num_of_cents;

	if (num_of_cents >= dollar_value)
	{
		num_of_dollars = num_of_cents / dollar_value;
		num_of_cents = num_of_cents % dollar_value;
	}
	if (num_of_cents >= quarter_value)
	{
		num_of_quarters = num_of_cents / quarter_value;
		num_of_cents = num_of_cents % quarter_value;
	}
	if (num_of_cents >= dime_value)
	{
		num_of_dimes = num_of_cents / dime_value;
		num_of_cents = num_of_cents % dime_value;
	}
	if (num_of_cents >= nickel_value)
	{
		num_of_nickels = num_of_cents / nickel_value;
		num_of_cents = num_of_cents % nickel_value;
	}

	num_of_pennies += num_of_cents;

	cout << "Amount of dollars: " << num_of_dollars << endl;
	cout << "Amount of quarters: " << num_of_quarters << endl;
	cout << "Amount of dimes: " << num_of_dimes << endl;
	cout << "Amount of nickels: " << num_of_nickels << endl;
	cout << "Amount of pennies: " << num_of_pennies << endl;
}
