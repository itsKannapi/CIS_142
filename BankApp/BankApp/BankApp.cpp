#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
    string name;
    double balance;

    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your bank account's balance: \n";
    cin >> balance;

    BankAccount instanceOne(name, balance);

    instanceOne.SetBalance(100);
}


