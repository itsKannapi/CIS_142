#include <iostream>
#include "Geometry.h"
using namespace std;
int main()
{
    double b, h;
    cout << "Enter the Height: ";
    cin >> h;
    cout << "Enter the Base: ";
    cin >> b;
    Geometry Joey (b, h);
    Joey.CalcRecArea();
    cout << "The area is ==> " << Joey.getArea() << endl;
}

