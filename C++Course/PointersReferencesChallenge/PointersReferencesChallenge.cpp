/*

--ooft--

*/

#include "pch.h"
#include <iostream>

using namespace std;

void print(const int *const array1, int array1_size);
int* apply_all(const int *const array1, int array1_size, const int *const array2, int array2_size);

int main()
{
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[] {1, 2, 3, 4, 5};
	int array2[] {10,20,30};

	cout << "Array 1:";
	print(array1, array1_size);

	cout << "\nArray 2:";
	print(array2, array2_size);

	int* results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t results_size{ array1_size * array2_size };

	cout << "\nResult: ";

	print(results, results_size);

	cout << endl << endl;

	return 0;
}


void print(const int *const array1, int array1_size) {

	cout << "[ ";

	for (size_t i = 0; i < array1_size; i++)
	{
		cout << array1[i] << " ";
	}

	cout << "]\n";
};

int* apply_all(const int *const array1, int array1_size,const int *const array2, int array2_size) {

	int* temp{};
	temp = new int[array1_size*array2_size];
	int position{ 0 };

	for (size_t i = 0; i < array2_size; i++){
		for (size_t j = 0; j < array1_size; j++){
			temp[position] = array1[j] * array2[i];
			position++;
		}
	}
	
	return temp;
};
