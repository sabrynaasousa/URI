#include <bits/stdc++.h>

using namespace std;

int main(){
  string line1, line2, n1, n2;
  int cont = 0, decimal = 0, ponto = 0;;
  
  cin >> line1 >> line2;
  
  cout << "cpf ";
  for( auto& n : line1 ){
    if( isdigit(n) != 0 && cont < 11){
      cout << n;
      cont++;
    }
    else if( isdigit(n) != 0 && cont >= 11 && decimal < 2){
      n1 += n;
      if( ponto != 0 )
        decimal++;
    }
    else if( n == '.' ){
      n1 += n;
      ponto = 1;
    }
  }
  
  cout << endl;
  
  decimal = 0, ponto = 0;
  for( auto& k : line2 ){
    if( isdigit(k) != 0 && decimal < 2 ){
      n2 += k;
      if( ponto != 0 )
        decimal++;
    }
    else if ( k == '.'){
      n2 += k;
      ponto = 1;
    }
  }
  long double i = stod(n1) + stod(n2);
  
  printf("%.2Lf\n", i );
   
  return 0;
}
