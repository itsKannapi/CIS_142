#include <iostream>
using namespace std;

int main()
{
    int x[4][5] = { {12,13,14,15}, {22,23,24,25}, {31,32,33,24} };
    int cols = sizeof(x[0]) / sizeof(int);
    int rows = (sizeof(x) / sizeof(int)) / cols;
    //cout << "Number of Columns: " << cols << endl;
    //cout << "Number of Rows: " << sizeof(x) / sizeof(int)/cols << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols - 1; c++) {
            x[r][cols - 1] += x[r][c];
        }
    }
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << x[r][c] << "\t";
        }
        cout << endl;
    }
}

