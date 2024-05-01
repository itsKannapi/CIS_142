#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	int rows;
	int cols;
	double tempNum;
	double average = 0;
	string name;

	vector<string> names;
	vector<vector<double>> grades;
	vector <double> temp;
	vector <double> averageGrades;

	cout << "Class Average Calculator" << endl;
	cout << "==============================================" << endl;

	cout << "How many students? " << endl;
	cin >> rows;
	cout << "How many grades each student? " << endl;
	cin >> cols;

	for (int r = 0; r < rows; r++) {
		cout << endl;
		cout << "What student " << r + 1 << "'s name?";
		cin >> name;
		names.push_back(name);
	}
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			cout << endl;
			cout << "Student " << (r + 1) << "'s grade #? " << (c + 1) << ": ";
			cin >> tempNum;
			temp.push_back(tempNum);
			average += tempNum;
		}
		average = (average / cols);
		averageGrades.push_back(average);
		grades.push_back(temp);
		temp.clear();
		average = 0;
		cout << "======================================";
	}
	cout << "\nClass averages: \n";
	cout << "\nStudent\tGrade1\tGrade2\tGrade3\tGrade4\tGrade5\tAverage\n";
	for (int r = 0; r < rows; r++) {
		cout << names[r] << "\t";
		for (int c = 0; c < cols; c++) {
			cout << setprecision(2) << fixed << grades[r][c] << "\t";
		}
		cout << setprecision(2) << fixed << averageGrades[r] << "\t\t";
		cout << endl << endl;
	}
}


