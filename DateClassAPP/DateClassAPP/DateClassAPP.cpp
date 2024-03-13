#include <string>
#include "DateClass.h"
#include <iostream>
using namespace std;

int main()
{
    int month, day, year;
    string MonthName;

    cout << "Date Format App\n";
    cout << "=============================\n";
    cout << "Enter the month as an Integer (00): \n";
    cin >> month;
    cout << "Enter the day as an Integer: \n";
    cin >> day;
    cout << "Enter the year as an Integer: \n\n";
    cin >> year;

    DateClass instance(month, day, year);

    instance.PrintMonth();
}

