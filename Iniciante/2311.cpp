#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  float gd, nt;
  string name;
  
  cin >> n;
  
  while( n-- ){
    cin >> name;
    cin >> gd;
    
    double min = 11.0, max = 0, t = 0;
    for( int i = 0; i < 7; ++i ){
      cin >> nt;
     
      if( nt < min ){
        min = nt;
      }
      if( nt > max ){
        max = nt;
      }
      
      t += nt;
    }
    double res = (t - min - max)*gd;
    cout << name;
    printf(" %.2lf\n", res );
  }
  return 0;
}
