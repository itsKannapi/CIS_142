#pragma once
#include <iostream>
using namespace std;

class BankAccount
{
public:

private:
	string name;
	double balance;
	BankAccount(string, double);
	BankAccount(string);
	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double);
	string getName();
	double getBalance();
};

