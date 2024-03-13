
#include "DateClass.h"
#include <iostream>
using namespace std;

DateClass::DateClass(int m, int d, int y) {
	this->month = m;
	this->day = d;
	this->year = y;
}
string DateClass::MonthName() {
	if (this->month == 01) {
		return "January";
	}
	else if (this->month == 02) {
		return "Feburary";
	}
	else if (this->month == 03) {
		return "March";
	}
	else if (this->month == 04) {
		return "April";
	}
	else if (this->month == 05) {
		return "May";
	}
	else if (this->month == 06) {
		return "June";
	}
	else if (this->month == 07) {
		return "July";
	}
	else if (this->month == 8) {
		return "August";
	}
	else if (this->month == 9) {
		return "September";
	}
	else if (this->month == 10) {
		return "October";
	}
	else if (this->month == 11) {
		return "November";
	}
	else {
		return "December";
	}
}
void DateClass::PrintMonth() {
	cout << "You have entered: " << MonthName() << " "<<  day << ", " << year;
}