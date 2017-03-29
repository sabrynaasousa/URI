#include <bits/stdc++.h>

using namespace std; 

int main(){
  string line;

  while( getline( cin, line ) ){
    istringstream is( line );
    string word;

    char aux = tolower( line[0] );
    int contLetters = 0, cont = 0;
    while( is >> word ){
      if( tolower( word[0] ) == aux ){
        contLetters++;
      } else if ( tolower( word[0] ) != aux && contLetters >= 2 ){
        cont++;
        contLetters = 1;
      }else {
        contLetters = 1;
      }
      aux = tolower( word[0] );
    }  
    
    if( contLetters != 1 )
      cout << cont + 1 << endl;
    else
      cout << cont << endl;
  }
  return 0;   
}





