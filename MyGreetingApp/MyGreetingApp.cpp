#include <string>
#include "Greetings.h"
#include <iostream>
using namespace std;

int main()
{
	string name;
	string days;
	double temperature;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter the day of the week: ";
	cin >> days;
	cout << "Enter the temperature in F: ";
	cin >> temperature;

	Greetings instance(name, days, temperature);

	instance.PrintMessage();
}


