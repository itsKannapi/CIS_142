#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string n, double b) {
	this->name = n;
	this->balance = b;
}
BankAccount::BankAccount(string n) {
	this->name = n;
}
void BankAccount::Withdraw(double w) {
	if (w > balance) {
		cout << "There is not enough money in the Bank account to withdrawl this much!";
	}
	else {
		this->balance = balance - w;
	}
}
void BankAccount::Deposit(double d) {
	if (d > 1000) {
		cout << "The deposit is over 1000, the action could not be performed";
	}
	else {
		this->balance = balance + d;
	}
}
void BankAccount::SetBalance(double b) {
	this->balance = b;
}
string BankAccount::getName() {
	return this->name;
}
double BankAccount::getBalance() {
	return this->balance;
}
