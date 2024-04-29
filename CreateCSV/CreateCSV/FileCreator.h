#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileCreator{
private:
	ofstream myfile;
public:
	FileCreator(string);
	void WriteFile(string, int, double, double);
	void WriteHeader();
	void CloseFile();
};

