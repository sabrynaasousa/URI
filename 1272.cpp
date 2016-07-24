#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main (){

	int n, i, j;
	string frase;

    cin >> n;
    getchar();

	for ( i = 0; i < n; i++ ){
      getline ( cin , frase );
      for ( j = 0; j < frase.size(); j++ ){
        if ( j == 0 && frase[j] != ' '){ 
          cout << frase[j];
        }
        else if ( frase[j-1] == ' ' && frase[j] != ' ' ){
          cout << frase[j];
        }
      }
      cout << endl;
	}

	return 0;
}
