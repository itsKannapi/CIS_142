#include <vector>
#include <iostream>
using namespace std;

int main(){
	//vector<vector<int>> sales;
	//vector<int> temp{11,12,13,14};

	//sales.push_back(temp);

	//for (int r = 0; r < sales.size(); r++) {
		//for (int c = 0; c < sales[r].size(); c++) {
			//cout << sales[r][c] << "\t";
		//}
		//cout << endl;
	//}
	//temp.clear();
	//temp = { 21,22,23,24 };
	//sales.push_back(temp);

	//for (int r = 0; r < sales.size(); r++) {
		//for (int c = 0; c < sales[r].size(); c++) {
			//cout << sales[r][c] << "\t";
		//}
		//cout << endl;
	//}

	int rows;
	int cols;
	int n;
	vector<vector<int>> sales;
	vector<int> temp;
	cout << "How many rows: ";
	cin >> rows;
	cout << "How many columns: ";
	cin >> cols;

	for (int r = 0; r < rows; r++) {
		for (int i = 0; i < cols; i++) {
			cout << "Enter row # " << (r + 1) << " column # " << (cols + 1) << ": ";
			cin >> n;
			temp.push_back(n);
		}
		cout << endl;
		sales.push_back(temp);
		temp.clear();
	}
	cout << endl;
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			cout << sales[r][c] << "\t";
		}
		cout << endl;
	}
}

