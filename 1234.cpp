#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main (){
  string s;
  char t;
  int cont, i;

  while ( getline (cin , s) ){
    cont = 0;
    for ( i = 0; i < s.size(); i++ ){
      if ( cont == 0 && s[i] != ' '){
        cont = 1;
        t = s[i];
        putchar (toupper(t));
      }
      else if ( s[i] != ' '){
        t = s[i];
        putchar (tolower(t));
        cont = 0;
      }
      else{
        cout << s[i];
      }

      if ( i == (s.size() - 1)){
        cout << endl;      
      }  
    }
  }
  return 0;
}
