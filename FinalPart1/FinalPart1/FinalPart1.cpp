#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    double x[size];
    int t = 1;
 

    while (t < size + 1) {
        cout << "Enter Sales # " << t << ": ";
        cin >> x[t];
        t++;
    }

    cout << "The entry sales backwards" << endl;
    t = 5;

    while (t > 0) {
        cout << "Sales # " << t << ": " << x[t] << endl;
        t--;
    }


}


