#include <iostream>
#include <stdlib.h>
using namespace std;


int main()
{
    
    //for (int x = 1; x <= 11; x+=2) {
        //cout << x << endl;
    //}
    //for (int x = 10; x >= 1; x--) {
       // cout << x << endl;
    //}
    //for (int x = 10; x <= 30; x++) {
        //cout << x << endl;
    //}
    //for (int x = 0; x <= 12; x++) {
        //cout << "5 x " << x << " ===> " << x * 5 << endl;
    //}
    //int x = 12;
    //while (x >= 0) {
        //cout << "5 x " << x << " ===> " << x * 5 << endl;
        //x--;
    //}

    //int x = 11;
    //do {
        //cout << x << endl;
        //x++;
    //} while (x <= 10);
    int option;
    do {
        cout << "Menu of Options " << endl;
        cout << "================ " << endl;
        cout << "1. Said Good Morning in Spanish" << endl;
        cout << "2. Said Good Morning in Portuguese" << endl;
        cout << "3. Said Good Morning in italian" << endl;
        cout << "4. To exit" << endl;
        cout << "Enter your option ==>";
        cin >> option;
        system("cls");
        if (option == 1) {
            cout << "Buenos Dias!" << endl;
        }
        else if (option == 2) {
            cout << "bom dia!" << endl;
        }
        else if (option == 3){
            cout << "Buongiorno!" << endl;
        }
        else if (option == 4) {
            cout << "Thank You for Using this App!" << endl;
        }
        else {
            cout << "Value invalid, please put down a different number." << endl;
        }
        system("pause");
        system("cls");

    } while (option != 4);
}


