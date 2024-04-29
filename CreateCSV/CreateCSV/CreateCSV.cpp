#include <iostream>
#include <fstream>
#include <string>
#include "FileCreator.h"
using namespace std;

int main() {
	string FileName;
	string product;
	int quantity;
	double price;
	double totalPrice;

	cout << "Enter a file name (.csv): " << endl;
	cin >> FileName;
	FileCreator file(FileName);
	file.WriteHeader();
	for (int i = 0; i < 5; i++) {
		cout << "Enter Product Name: " << endl;
		cin >> product;
		cout << "Enter Quantity: " << endl;
		cin >> quantity;
		cout << "Enter Price: " << endl;
		cin >> price;
		
		totalPrice = quantity * price;
		file.WriteFile(product, quantity, price, totalPrice);
	}
}