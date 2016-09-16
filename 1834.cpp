#include <bits/stdc++.h>

using namespace std;

int main (){

  double x1, y1, x2, y2, x, y, dist, a, b, c;
  int n, h, casual = 0, esq = 0, dir = 0, hdir = 0, hesq = 0;
  
  cin >> x1 >> y1 >> x2 >> y2;
  cin >> n;
  
  dist = sqrt(pow((x2 -x1),2) + pow((y2 -y1),2));
  
  a = y1 - y2;
  b = x2 - x1;
  c = x1*y2 - x2*y1;

  auto k = a ? a : b;

  a /= k;
  b /= k;
  c /= k;
  
  printf("Relatorio Vogon #35987-2\n");
  printf("Distancia entre referencias: %.2lf anos-luz\n", dist);
  
  for ( int i = 0; i < n; i++ ){
    cin >> x >> y >> h;
    
    if ( ( a*x + b*y + c ) == 0 ){
      casual += 1;
    }
    else if ( ( a*x + b*y + c ) < 0 ){
      esq += 1;
      hesq += h;
    }
    else {
      dir += 1;
      hdir += h;
    }
  }
  
  printf("Setor Oeste:\n");
  printf("- %d planeta(s)\n", esq); 
  printf("- %d bilhao(oes) de habitante(s)\n", hesq);
  printf("Setor Leste:\n");
  printf("- %d planeta(s)\n", dir);
  printf("- %d bilhao(oes) de habitante(s)\n", hdir);
  printf("Casualidades: %d planeta(s)\n", casual);
  
    
  return 0;
}
