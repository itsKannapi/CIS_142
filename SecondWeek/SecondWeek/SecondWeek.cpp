// SecondWeek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
	double length, height, area;

	cout << "Enter the Length: \n";
	cin >> length;
	cout << "Enter the height: \n";
	cin >> height;

	area = length * height;
	
	cout << "The area is ==> " << area << "\n";
} 

