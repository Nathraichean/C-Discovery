#include "pch.h"
#include <vector>
#include <iostream>
#include <climits>

using namespace std;

void print_menu();
void print_numbers(vector<int> v);

int main()
{
	bool done{ false };
	int add_num{ 0 };
	double total{ 0 };
	double mean{ 0.0 };
	int min_number = INT_MAX;
	int max_number = INT_MIN;

	vector<int> vec{ };

	while (!done){
		print_menu();

		char input{ ' ' };
		cin >> input;
		switch (input) {
			case 'p':
			case 'P':
				print_numbers(vec);
				break;
			case 'a':
			case 'A':
				cout << "\n Please type a number to add to the list: ";
				cin >> add_num;
				vec.push_back(add_num);
				cout << endl << add_num << " added.";
				cout << "\n--------------------\n";
				break;
			case 'm':
			case 'M':
				if (vec.size() == 0) {
					cout << "\nUnable to calculate the mean - no data";
					cout << "\n--------------------\n";
				}
				else {
					for (auto num : vec)
						total += num;
					mean = total / vec.size();
					cout << "The average of all numbers is " << mean;
					cout << "\n--------------------\n";	
				}
				break;
			case 's':
			case 'S':
				for (auto num : vec) {
					if (num < min_number){
						min_number = num;
					}
				}
				cout << "\nThe smallest number is " << min_number;
				cout << "\n--------------------\n";
				break;
			case 'l':
			case 'L':
				for (auto num : vec) {
					if (num > max_number) {
						max_number = num;
					}
				}
				cout << "\nThe smallest number is " << max_number;
				cout << "\n--------------------\n";
				break;
			case 'q':
			case 'Q':
				cout << "Goodbye!\n";
				done = true;
				break;
			default:
				cout << "\nInvalid input.";
				cout << "\n--------------------\n";
				break;
		}
	}
}

void print_menu() {
	cout << "P - Print numbers\n";
	cout << "A - Add a number\n";
	cout << "M - Display mean of the numbers\n";
	cout << "S - Display the smallest number\n";
	cout << "L - Display the largest number\n";
	cout << "Q - Quit\n\n";
	cout << "Enter your choice: ";
}

void print_numbers(vector<int> v) {
	if (v.size() == 0) {
		cout << "\n[] - the list is empty";
		cout << "\n--------------------\n";
	}
	else {
		cout << "\n[";
		for (auto num : v)
			cout << num << " ";
		cout << "]";
		cout << "\n--------------------\n";
	}
}