
#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vector1{};
	vector<int> vector2{};

	cout << "Vector1 :\n";
	vector1.push_back(10);
	vector1.push_back(20);
	cout << vector1.at(0) << endl << vector1.at(1) << endl << endl;
	

	cout << "Vector2 :\n";
	vector2.push_back(100);
	vector2.push_back(200);
	cout << vector2.at(0) << endl << vector2.at(1) << endl << endl;
	

	cout << "Vector_2d :\n";
	vector<vector<int>> vector_2d{};
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << vector_2d.at(0).at(0) << " ";
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " ";
	cout << vector_2d.at(1).at(1) << endl << endl;
	

	vector1.at(0) = 1000;

	cout << "Vector_2d after vector1[0]=1000 :\n";
	cout << vector_2d.at(0).at(0) << " ";
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " ";
	cout << vector_2d.at(1).at(1) << endl << endl;
	

	cout << "Vector1 :\n";
	cout << vector1.at(0) << endl << vector1.at(1) << endl << endl;
	



}

