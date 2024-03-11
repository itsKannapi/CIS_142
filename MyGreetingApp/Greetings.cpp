#include "Greetings.h"
#include <iostream>
using namespace std;

Greetings::Greetings(string n, string d, double t) {
	this->name = n;
	this->days = d;
	this->temperature = t;
}
string Greetings::BuildMessage() {
	if (this->temperature >= 90) {
		return " too hot!";
	}
	else if (this->temperature >= 75) {
		return " hot!";
	}
	else if (this->temperature >= 55) {
		return " cool!";
	}
	else if (this->temperature >= 35) {
		return " cold!";
	}
	else {
		return " super cold!";
	}
}
void Greetings::PrintMessage() {
	cout << "Good Morning " << name << " , it is " << days << " and the climate is" << BuildMessage(); " !!";
}

