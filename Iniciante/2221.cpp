#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int t, b, a, d, l;
  double vg = 0, aux = 0;
  
  cin >> t;
  
  while( t-- ){
    cin >> b;
    
    aux = 0;
    
    for( int i = 0; i < 2; ++i ){
      cin >> a >> d >> l;
      
      aux = vg;
      
      vg = ( a + d )/2;
      
      if( l%2 == 0 )
        vg += b;
  
    }
    
    if( aux == vg )
      cout << "Empate" << endl;
    else if ( aux > vg )
      cout << "Dabriel" << endl;
    else
      cout << "Guarte" << endl;  
  }
  
  return 0;
}
