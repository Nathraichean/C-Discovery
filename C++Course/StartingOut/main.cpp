#include <iostream>

int main()
{

	int number = 0;

	std::cout << "Enter your favourite number between 1 and 100: ";
	std::cin >> number;
	std::cout << "Amazing, thats my favourite number too!\n";
	std::cout << "No, really, " << number << " is my favourite number!\n\n";

	return 0;
}