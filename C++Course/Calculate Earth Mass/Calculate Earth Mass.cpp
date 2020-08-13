

#include "pch.h"
#include <iostream>

using namespace std;
int width_of_room(int a);

int main()
{

	cout << "\n\nEnter the length of the room: ";
	int length_of_room{ 0 };
	cin >> length_of_room;

	cout << "Enter the width of the room: ";

	//int width_of_room{ 0 };
	//cin >> width_of_room;

	cout << "The area of the room is " << length_of_room * width_of_room(5) << " sq. meteres.\n";


	return 0;
}

int width_of_room(int width) {

	width = width * 2;

	return width;
}
