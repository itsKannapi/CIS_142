#include <fstream>
#include <iostream>
#include <string>
#include "FileCreator.h"
using namespace std;

int main(){
    string FileName;
    string name;
    double GradeOne, GradeTwo, GradeThree, GradeFour, Average;

    cout << "Enter a file name (in .csv): ";
    cin >> FileName;
    FileCreator file(FileName);
    file.WriteHeader();
    for (int i = 0; i < 5; i++) {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter Grade #1: ";
        cin >> GradeOne;
        cout << "Enter Grade #2: ";
        cin >> GradeTwo;
        cout << "Enter Grade #3: ";
        cin >> GradeThree;
        cout << "Enter Grade #4: ";
        cin >> GradeFour;

        Average = (GradeOne + GradeTwo + GradeThree + GradeFour) / 4;
        file.WriteFile(name, GradeOne, GradeTwo, GradeThree, GradeFour, Average);
    }
}
