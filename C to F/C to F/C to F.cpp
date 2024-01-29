// C to F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double FtoC2(double f) {
    double c = (((f - 32) * 5) / 9);
    return c;
}
void FtoC(double f) {
    double c;
    c = (((f - 32) * 5) / 9);

    cout << f << " degrees fahrenheit is " << c << " degrees celcius \n";
}
int main()
{
    double tempF, tempC;

    cout << "Enter the degrees fahrenheit \n";
    cin >> tempF;
    FtoC(tempF);
    tempC = FtoC2(tempF);
    cout << "The temperature in Celcius using function 2 is: " << tempC;

}

