
#include "pch.h"
#include <iostream>
#include "Mystring.h"
#include <vector>

using namespace std;

int main()
{
	Mystring empty;              // no-args constr.
	Mystring larry("Larry");	 // overloaded constr.
	Mystring stooge(larry);      // copy constr.
	Mystring stooges;

	empty = stooge;

	empty.display();
	larry.display();
	stooge.display();
	stooges.display();

	stooges = "Larry, Moe and Curly";
	stooges.display();

	vector<Mystring> stooges_vec;
	stooges_vec.push_back("Larry");
	stooges_vec.push_back("Moe");
	stooges_vec.push_back("Curly");
	
	cout << "===Loop1===============\n";

	for (const Mystring &s : stooges_vec)
		s.display();

	cout << "===Loop2===============\n";
	for (Mystring &s : stooges_vec)
		s = "Changed";

	cout << "===Loop3===============\n";
	for (const Mystring &s : stooges_vec)
		s.display();
}
