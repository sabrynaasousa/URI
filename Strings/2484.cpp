#include <bits/stdc++.h>

using namespace std;

int main(){
  
  string word, str;
  
  while( cin >> word ){
    int tam = word.size();
    
    for( int i = 0; i < tam; ++i ){
      if( i != 0 ){
        word.pop_back();
      }  
        
      str = "";
      for( auto& c : word ){
        str += c;
        str += ' ';
      }
      str.pop_back();
      cout << string( i, ' ' );
      cout << str << endl;
    }
    
    cout << endl;
  }
  
  return 0;
}
