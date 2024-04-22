#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	//this code creates a txt file within the total code folder and adds names
	ofstream gustavo;
	int num;
	string name;
	int age;
	string program;
	gustavo.open("student.csv", ios::app);
	cout << "How many students: ";
	cin >> num;
	cin.ignore();
	for (int i = 0;  i < num; i++) {
		cout << "Enter Student Name: ";
		getline(cin, name);
		cout << "Enter Student Program: ";
		getline(cin, program);
		cout << "Enter Student Age: ";
		cin >> age;
		gustavo << name << " , " << program << " , " << age << endl;
		cin.ignore();
	}
	gustavo.close();
}

