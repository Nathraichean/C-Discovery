
#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string message{};

	getline(cin, message);

	replace(message.begin(), message.end(), 'e', 'Z');
	replace(message.begin(), message.end(), 'p', 'N');

	cout << message << endl;
}

