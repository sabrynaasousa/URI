#include<bits/stdc++.h>

using namespace std;

int freq[255];

int main(){

  int n;
  string frase;
  
  cin >> n;
  getchar();
  
  while( n-- ){
    getline( cin, frase );
    memset( freq, 0, sizeof freq );
    int maxFrequence = 0;
    for( int i = 0; frase[i] = tolower( frase[i] ); ++i ){
      if( frase[i] != ' ' ){
        maxFrequence = max( maxFrequence, ++freq[frase[i]] );
      }
    }
    
    set<char> f;
    for( int i = 0; frase[i]; ++i ){
      if( freq[frase[i]] == maxFrequence){
        f.insert( frase[i] );
      }
    }
    
    for( auto&v : f ){
      cout << v;
    }
    
    cout << endl;
    
  }
  
  return 0;
}
