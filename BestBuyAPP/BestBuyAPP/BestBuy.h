#include <iostream>
using namespace std;

class BestBuy
{
private:
	string StoreName;
	double AcumSales;

public: 
	BestBuy(string);
	void CalcAcum(double);
	double getAcumSales();
	string getStoreName();
};

