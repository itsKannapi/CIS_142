#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
    string name;
    double balance, temp1, temp2;

    cout << "Enter your name: \n";
    cin >> name;
    //cout << "Enter your bank account's balance: \n";
    //cin >> balance;

    BankAccount instanceOne(name);
    instanceOne.SetBalance(1000);
    
    cout << "Enter a balance to deposit into the Account (cannot be over $1000): \n";
    cin >> temp1;
    instanceOne.Deposit(temp1);
    cout << "Your new balance is: " << instanceOne.getBalance() << " dollars. \n";

    cout << "Enter a balance to withdrawl from the Account (cannot be over balance): \n";
    cin >> temp2;
    instanceOne.Withdraw(temp2);
    cout << "Your new balance is: " << instanceOne.getBalance() << " dollars. \n";
}


