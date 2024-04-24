#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(){
	string line, word;
	ifstream gust;
	gust.open("C:/Users/wrl123u/Documents/employees.csv");
	if (gust.is_open()) {
		cout << "You could open the file!!\n";
	}
	else {
		"Something went wrong!!!111!\n";
	}
}


