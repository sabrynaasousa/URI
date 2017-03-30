#include <bits/stdc++.h>

using namespace std;

int main(){
  string line, token;

  while( getline( cin, line ) ){
    string word;
    istringstream is( line );

    int contWord = 0, size = 0, contChar = 0;
    while( is >> word ){
      contChar = 0;

      istringstream it( word );
      getline( it, token, '.' ); 
      for( auto& v : token ){      
        if( isalpha( v ) ){
          contChar++;
        }
      }

      if( contChar == token.size() ){
        contWord++;
        size += token.size();
      } 
    }
    
    if( contWord != 0 ){
      int sizeMedium = size/contWord;
      if( sizeMedium <= 3 )
        cout << 250 << endl;
      else if( sizeMedium <= 5 )
        cout << 500 << endl;
      else
        cout << 1000 << endl;
    } else {
      cout << 250 << endl;
    }
      
  } 
  return 0;
}
