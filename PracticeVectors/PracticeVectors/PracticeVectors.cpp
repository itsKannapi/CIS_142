
using namespace std;
#include <iostream>
#include <vector>

int main()
{
    cout << "How many number(s) do you want to enter ? ";
    int a;
    int b;
    int total = 0;

    vector <int> lel{};
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << "Enter Number: ";
        cin >> b;
        lel.push_back(b);
        total += b;
    }

    for (int i = 0; i < lel.size(); i++) {
        cout << lel[i] << endl;
    }

    cout << endl;
}

