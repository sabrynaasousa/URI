#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string frase;
  
  cin >> n;
  getchar();
  
  for( int i = 0; i < n; ++i ){
    getline( cin, frase );
    
    set<char> alfabeto;
    for( auto& v : frase ){
      if( isalpha( v ) )
        alfabeto.insert( v );
    }
        
    if( alfabeto.size() == 26 )
      cout << "frase completa" << endl;
    else if ( alfabeto.size() >= 13 )
      cout << "frase quase completa" << endl;
    else
      cout << "frase mal elaborada" << endl;
          
    alfabeto.clear();
  }
  
  return 0;
}
