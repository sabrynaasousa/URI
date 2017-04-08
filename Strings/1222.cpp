#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, l, c;
  
  while( cin >> n >> l >> c ){
    string word;
    int paginas = 0, caracteres = 0, maxLinhas = 1;
    while( n-- ){
      cin >> word;

      if( word.size() + (  caracteres != 0 ) + caracteres <= c ){
        caracteres += word.size() + ( caracteres != 0 );
      }
      else{
        maxLinhas++;
        caracteres = word.size();
        if( maxLinhas > l ){
          maxLinhas = 1;
          paginas++;
        }  
      }
    }
    
    cout << paginas + 1 << endl;
  }
  
  return 0;
}
