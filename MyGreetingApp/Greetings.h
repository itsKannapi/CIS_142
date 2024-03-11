#pragma once
#include <iostream>
using namespace std;
class Greetings{
private:
	string name;
	string days;
	double temperature;
	string BuildMessage();
public:
	Greetings(string, string, double);
	void PrintMessage();
};

