#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main (){
  string frase, compare = "*";
  int cont, tautograma;

  while ( getline( cin, frase) && frase.compare( compare ) != 0 ){
    transform( frase.begin(), frase.end(), frase.begin(), ::tolower );
    cont = 0, tautograma = 0;
    for ( int i = 0; i < frase.size(); i++ ){
      if ( frase[i-1] == ' ' ){
        cont ++;  
        if ( frase[i] == frase[0] ){
          tautograma ++;
        }
      }
    }
    if ( cont == tautograma ){
      cout << "Y" << endl;
    }
    else {
      cout << "N" << endl;
    }  
  }
  return 0;
}
