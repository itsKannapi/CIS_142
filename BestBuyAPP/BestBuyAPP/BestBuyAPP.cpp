#include <iostream>
#include <string>
#include "BestBuy.h"
#include "BestBuyAPP.h"
using namespace std;

int main()
{
   string name;
   double sales;
   int NofMonths;
   cout << "Best Buy Sales App\n";
   cout << "=======================\n\n";
   cout << "Enter the store name: " << endl;
   getline(cin, name);
   BestBuy s1(name);
   cout << "How many months do you want to evaulate:  " << endl;
   cin >> NofMonths;

   for (int m = 1; m <= NofMonths; m++) {
	   cout << "Enter sales month #" << m << ": ";
	   cin >> sales;
	   s1.CalcAcum(sales);
   }

   cout << "The Average Sales: " << s1.getAcumSales() / NofMonths << endl;

}

