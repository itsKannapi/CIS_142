#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	char option;
	do {
		cout << "\nMenu of Options" << endl;
		cout << "==================\n\n";
		cout << "a. Say Good Morning in Spanish" << endl;
		cout << "b. Say Good Morning in Portuguese" << endl;
		cout << "c. Say Good Morning in Italian" << endl;
		cout << "\nd. Exit" << endl;
		cout << "\nEnter your option ==> ";
		cin >> option;
		system("cls");

		switch (option) {
		case 'a':
			cout << "\n Buenos Dias!!!\n";
			break;
		case 'b':
			cout << "\n Bom Dia!!!\n";
			break;
		case 'c':
			cout << "\n Bon Giorno!!!\n";
			break;
		case 'd':
			cout << "\n Thanks for using this App!!!\n";
			break;
		default:
			cout << "\n You enter the wrong option!!!! \n";
			break;
		}
		system("pause");
		system("cls");
	} while (option != 'd');
}