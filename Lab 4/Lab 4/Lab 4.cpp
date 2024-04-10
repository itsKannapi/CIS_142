#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//int main(){
    //string names[5];
    //double grades[6][5];

    //for (int i = 0; i < 5; i++) {
        //cout << "Enter a student name: " << endl;
        //getline(cin, names[i]); 
    //}
   // for (int r = 0; r < 5; r++) {
        //for (int c = 0; c < 5; c++) {
            //cout << "Enter " << names[r] << "'s grades: " << endl;
            //cin >> grades[r][c];
       // }
    //}
    
    //for (int r = 0; r < 5; r++) {
        //double average = 0;
        //cout << names[r] << " ";
       // for (int c = 0; c <= 5; c++) {
            //cout << grades[r][c] << "   ";
           // average += grades[r][c];
       // }
       // cout << average / 6 << endl;
    //}

    int main(){
        const int numStudents = 5;
        const int numGrades = 6;

        string names[numStudents];
        double grades[numStudents][numGrades];

        // student names
        for (int i = 0; i < numStudents; i++) {
            cout << "Enter a student name: ";
            getline(cin, names[i]);
        }

        // grades for each student
        for (int r = 0; r < numStudents; r++) {
            cout << "Enter " << names[r] << "'s grades: " << endl;
            for (int c = 0; c < numGrades; c++) {
                cin >> grades[r][c];
            }

            cin.ignore();
        }

        // Output table
        cout << fixed << setprecision(2); 
        for (int r = 0; r < numStudents; r++) {
            cout << left << setw(15) << names[r];
            for (int c = 0; c < numGrades; c++) {
                cout << setw(8) << grades[r][c];
            }
            double average = 0;
            for (int c = 0; c < numGrades; c++) {
                average += grades[r][c];
            }
            cout << setw(10) << average / numGrades << endl;
        }

        return 0;
    }


