// Vector.cpp : This file contains the 'main' function. Program execution begins and ends there. //we need a vector library for vectors #include <vector> #include <iostream> #include <algorithm> using namespace std; int main() { cout << "Hello World!\n"; // declaring a vector vector<int> num{12,24,54,64,88,99}; cout << "Size of vector : " << num.size() << endl; for (int i = 0; i < num.size(); i++) { cout << num[i] << endl; } num.push_back(100);// added that value to the end of the vector cout << endl; for (int i = 0; i < num.size(); i++) { cout << num[i] << endl; } cout << endl; num.erase(num.begin()+1, num.end() - 2);//got rid of everything exceot the last 2,,, yhe plus 1 means it starts after the first obetc for (int i = 0; i < num.size(); i++) { cout << num[i] << endl; } cout << endl; num.insert(num.begin() + 2, 200); for (int i = 0; i < num.size(); i++) { cout << num[i] << endl; } cout << endl; sort(num.begin(), num.end());//put in order for (int i = 0; i < num.size(); i++) { cout << num[i] << endl; } cout << endl;  
#include <vector> 
#include <iostream> 
#include <algorithm> 
using namespace std; 

int main() {
	// declaring a vector
	vector <int> num{12,24,54,64,88,99};
	
	cout << "Size of vector : " << num.size() << endl; 
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << endl; 
	} 
	
	num.push_back(100); // added that value to the end of the vector
	cout << endl; 
	for (int i = 0; i < num.size(); i++) { 
		cout << num[i] << endl; 
	} 
	cout << endl; 
	
	num.erase(num.begin()+1, num.end() - 2);//got rid of everything exceot the last 2,,, yhe plus 1 means it starts after the first obetc 
	for (int i = 0; i < num.size(); i++) { 
		cout << num[i] << endl; 
	} 
	cout << endl; 
	num.insert(num.begin() + 2, 200); 
	for (int i = 0; i < num.size(); i++) { 
		cout << num[i] << endl; 
	}
	cout << endl; 
	sort(num.begin(), num.end());//put in order 
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << endl; 
	} 
	cout << endl;  
}




