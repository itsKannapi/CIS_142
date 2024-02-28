// loops exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//for-loop
	//for (int i = 1; i <= 12; i++) {
		//cout << "\nTable of " << i << endl;
		//for (int j = 1; j <= 12; j++) {
			//cout << i << " x " << j << " ==> " << i * j << endl;
		//}
   //}
	int i = 1;
	int j = 1;

	while (i <= 12) {
		cout << "\nTable of " << i << endl;
		while (j <= 12) {
			cout << i << " x " << j << " ==> " << i * j << endl;
			j++;
		}
		j = 1;
		i++;
	}
}

