#include "BestBuy.h"
#include <iostream>
using namespace std;

BestBuy::BestBuy(string name) {
	this->StoreName = name;
	this->AcumSales = 0;
}

void BestBuy::CalcAcum(double s) {
	this->AcumSales += s;
}

double BestBuy::getAcumSales() {
	return this->AcumSales;
}

string BestBuy::getStoreName() {
	return this->StoreName;
}
