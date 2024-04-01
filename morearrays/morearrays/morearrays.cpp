#include <iostream>
using namespace std;

void BubbleSort(int []);

int main()
{
	int x[10] = { 34,12,56,55,7,99,23,5,11 };
	cout << "Array before sorting\n";
	cout << "==============================" << endl;
	for (int i = 0; i < 10; i++) {
		cout << x[i] << "\t";
	}

	cout << endl;

	BubbleSort(x);

	cout << "Array After sorting\n";
	cout << "==============================" << endl;
	for (int i = 0; i < 10; i++) {
		cout << x[i] << "\t";
	}

}

void BubbleSort(int gust[]) {
	int temp = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (gust[i] > gust[j]) {
				temp = gust[j];
				gust[j] = gust[i];
				gust[i] = temp;
			}
		}
	}
}
