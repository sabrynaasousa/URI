#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n, s, b, a, s1, b1, a1, ps = 0, ps1 = 0, pb = 0, pb1 = 0, pa = 0, pa1 = 0;
  double ts = 0, tb = 0, ta = 0;
  
  string name;
  
  cin >> n;
  
  while( n-- ){
    cin >> name;
    cin >> s >> b >> a;
    cin >> s1 >> b1 >> a1;
    
    ps += s, ps1 += s1;
    pb += b, pb1 += b1;
    pa += a, pa1 += a1;
    
  }
  
  ts = (double) (100*ps1)/ps;
  tb = (double) (100*pb1)/pb;
  ta = (double) (100*pa1)/pa;
  
  printf( "Pontos de Saque: %.2lf %%.\n", ts );
  printf( "Pontos de Bloqueio: %.2lf %%.\n", tb );
  printf( "Pontos de Ataque: %.2lf %%.\n", ta );
  
  return 0;
}
