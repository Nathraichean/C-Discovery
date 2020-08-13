// ArrayTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int arr1[]{ 1,2,3,4 };
	int arr2[]{ 10,20,30,40 };
	int* pointer{ nullptr };

	cout << "Array 1 : [ ";
	for (size_t i = 0; i < 4; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << "]";
	cout << "\nArray 2 : [ ";
	for (size_t i = 0; i < 4; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << "]";

	cout << "\n\nPrinting \"arr1\": " << arr1;
	cout << "\nPrinting \"&arr1\": " << &arr1;
	
	cout << "\n\nPrinting \"arr2\": " << arr2;
	cout << "\nPrinting \"&arr2\": " << &arr2;

	cout << "\n\nPrinting \"arr1[0]\": " << arr1[0];
	cout << "\nPrinting \"*arr1\": " << *arr1;

	cout << "\n\nMaking following statement...";
	cout << "\npointer = new int[4];";
	cout << "\npointer = arr1;";
	pointer = new int[4];
	pointer = arr1;
	cout << "\nPointer : [ ";
	for (size_t i = 0; i < 4; i++)
	{
		cout << pointer[i] << " ";
	}
	cout << "]\n";
}

