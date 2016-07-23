#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main (){

	char d, n[100];
    int cont, tam;

    while ( cin >> d >> n && d != '0' ){
      tam = strlen(n);
      cont = 0;
      for ( int i = 0; i < tam; i++ ){
        if ( n[0] == d ){
          if ( n[i] != d &&  n[i] != '0' || ( n[i] == '0' && cont == 0 ) ) {
            cout << n[i];
            cont = 0;
          }
          else if ( cont == tam-1 ){
            cout << '0';
          }
          else{
            cont++;
          }
        }
        else if ( n[i] != d ) {
          cout << n[i];
        }
      }
      cout << endl;
    }

	return 0;
}
