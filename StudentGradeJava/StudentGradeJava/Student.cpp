#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string n) {
	this->name = n;
	this->TotalGrade = 0;
}

void Student::AddGrade(double g) {
	this->TotalGrade += g;
}
double Student::Calcaverage(int p) {
	return this->TotalGrade / p;
}
string Student::getLetterGrade(double l) {
	if (l >= 100) {
		return "A+";
	}
	else if (l >= 93 && l <= 99.99) {
		return "A";
	}
	else if (l >= 90 && l <= 92.99) {
		return "A-";
	}
	else if (l >= 87 && l <= 89.99) {
		return "B+";
	}
	else if (l >= 83 && l <= 86.99) {
		return "B";
	}
	else if (l >= 80 && l <= 82.99) {
		return "B-";
	}
	else if (l >= 77 && l <= 79.99) {
		return "C+";
	}
	else if (l >= 73 && l <= 76.99) {
		return "C";
	}
	else if (l >= 70 && l <= 72.99) {
		return "C-";
	}
	else if (l >= 67 && l <= 69.99) {
		return "D+";
	}
	else if (l >= 63 && l <= 66.99) {
		return "D";
	}
	else if (l >= 60 && l <= 62.99) {
		return "D-";
	}
	else {
		return "F";
	}
}
