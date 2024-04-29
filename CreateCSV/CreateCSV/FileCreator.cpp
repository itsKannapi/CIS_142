#include "FileCreator.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

FileCreator::FileCreator(string s) {
	this->myfile.open(s);
}
void FileCreator::WriteHeader() {
	this->myfile << "Product, Quantity, Price, TotalPrice";
}
void FileCreator::WriteFile(string p, int q, double pr, double t) {
	this->myfile << p << ", " << q << ", " << pr << ", " << t << endl;
}
void FileCreator::CloseFile() {
	myfile.close();
}