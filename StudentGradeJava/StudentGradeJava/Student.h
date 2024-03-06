#pragma once
using namespace std;
#include <iostream>

class Student
{
public:
	Student(string);
	string getLetterGrade(double);
	void AddGrade(double);
	double Calcaverage(int);
private:
	string name;
	double TotalGrade;
};

