using namespace std;
#include "Student.h"
#include <iostream>

int main()
{
	string name, grade;
	double TotalGrade;
	int months, temps;

	cout << "Enter your Name: \n";
	cin >> name;
	cout << "Enter the number of months: \n";
	cin >> months;
	temps = months;
	Student instance(name);

	while (temps >= 1) {
		double temp;
		cout << "Enter the Grade: ";
		cin >> temp;
		instance.AddGrade(temp);
		temp = 0;
		temps--;
	}
	TotalGrade = instance.Calcaverage(months);
	grade = instance.getLetterGrade(TotalGrade);
	cout << "\n========================= \n";
	cout << "Name of the Student: " << name << endl;
	cout << "Final Grade: " << TotalGrade << endl;
	cout << "Letter Grade: " << grade << endl;

}
