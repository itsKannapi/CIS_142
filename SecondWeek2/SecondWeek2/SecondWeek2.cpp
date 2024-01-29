// SecondWeek2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void FtoC(double f) {
    double c = (((f - 32) * 5) / 9);
    cout << "It is aproximately " << c << " degrees celcius \n";
}
double FtoC2(double f) {
    double c = (((f - 32) * 5) / 9);
    return c;
}
int main()
{
    double f, c;
    cout << "Enter the degress in fahrenheit \n";
    cin >> f;
    FtoC(f);

    cout << "Another functions thinks it is also " << FtoC2(f);
    
}


