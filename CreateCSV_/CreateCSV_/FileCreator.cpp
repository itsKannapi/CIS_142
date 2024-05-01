#include "FileCreator.h"

FileCreator::FileCreator(string n) {
	this->MyFile.open(n);
}
void FileCreator::WriteFile(string name, double a, double b, double c, double d, double avg) {
	this->MyFile << name << "," << a << "," << b << "," << c << "," << d << "," << avg << endl;
}
void FileCreator::WriteHeader() {
	this->MyFile << "Name, BIO101, CHEM200, MATH101, CIS101, Averages" << endl;
}
void FileCreator::CloseFile() {
	this->MyFile.close();
}
