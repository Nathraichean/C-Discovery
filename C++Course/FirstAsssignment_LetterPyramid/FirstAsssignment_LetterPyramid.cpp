
#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string input{};
	getline(cin, input);

	for (size_t i = 1; i <= input.length(); i++)
	{
		string blankspaces(input.length() - i, ' '); // amount of blankspaces == input input length - printed letters
		string left_string{input,0,i }; // left side of string is created from the input.
								// its created by taking X amount of chars from input where
								// X is the number of line being printed (or iteration number (i))
		string right_string{};  // declare right string
		right_string = left_string; // get left string so we can reverse it
		reverse(right_string.begin(), right_string.end()); // right string is now left string but reversed
														   // you need #include <algorithm>
		string modified_right_string{ right_string, 1, right_string.length() }; 
												// deduct first char because its mirrored from left string

		cout << blankspaces << left_string << modified_right_string << endl;
	}
}

