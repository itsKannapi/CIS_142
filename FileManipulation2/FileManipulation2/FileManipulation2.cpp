#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string line;
	ifstream gust;
	gust.open("../../FileManipulation/FileManipulation/student.txt");
	if (gust.is_open()) {
		while (getline(gust, line)) {
			cout << line << endl;
		}
	}
	else {
		cout << "Something is wrong with the file!!!" << endl;
	}
	gust.close();
}
