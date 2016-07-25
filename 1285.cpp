#include <iostream>

using namespace std;

int main (){

  int n, m, iguais, qtd;
  string num;

  while ( cin >> n >> m ){
    qtd = 0;  
    for ( int i = n; i <= m; i++ ){
      iguais = 0;  
      num = to_string( i );
      for ( int j = 0; j < num.size(); j++ ){
        for ( int k = j + 1; k < num.size(); k++ ){
          if ( num[j] == num[k] ){
            iguais =  1;
          }
        }
      }
      if ( iguais == 0 ){
        qtd++;
      }
    }
    cout << qtd << endl;
  }
  return 0;
}
