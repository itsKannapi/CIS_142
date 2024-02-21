#pragma once
#include <iostream>
using namespace std;

class BankAccount
{
public:
	BankAccount(string, double);
	BankAccount(string);
	void Withdraw(double);
	void Deposit(double);
	void SetBalance(double);
	string getName();
	double getBalance();
private:
	string name;
	double balance;
};

