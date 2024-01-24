// Joey Tamondong

#include <iostream>
using namespace std;

double CalcPayment(double, int);

int main(){
	//Declaring Variables
	double PayRate = 15.50;
	int HoursWorked = 40;
	double Payment;
	cout << "Payroll System" << endl;
	cout << "==================\n\n";
	cout << "Enter the Pray Rate ==> ";
	cin >> PayRate;
	cout << "Enter the hours you have worked ==> ";
	cin >> HoursWorked;
	Payment = CalcPayment(HoursWorked, PayRate);

	cout << "Your Payment is ==> " << Payment << "\n";+
}

double CalcPayment(double h, int p) {
	if (h <= 40) {
		return p * h;
	}
	else {
		return (40 * p) + ((h - 40) * (p * 1.5));
	}
}