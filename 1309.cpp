#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main (){

    string dolares, centavos;
    int i;

    while ( cin >> dolares ){
        cin >> centavos;

        cout << '$';

        for ( i = 0; i < dolares.size(); i++ ){
            if ( dolares.size() - i == 3 && i != 0 || dolares.size() - i == 6 && i != 0 || dolares.size() - i ==  9 && i != 0 ){
                cout << ',';
            }
            cout << dolares[i];  
        }
        cout << '.';
        if ( centavos.size() == 1 ){
            cout << '0';
            cout << centavos << endl;
        }
        else
            cout << centavos << endl;
    }  
       
    return 0;
}

