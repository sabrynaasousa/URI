#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, t;
  
  while( cin >> n ){
    int levels = ( n + 1 ) >> 1;
    for( int i = 0, t = 1; i < levels; ++i, t +=2 ){
      cout << string( levels - 1 - i, ' ' );
      cout << string( t, '*' ) << endl;
    }
    
    cout << string( levels - 1, ' ' ) << '*' << endl; 
    cout << string( levels - 2, ' ' ) << "***" << endl;
    cout << endl;
  }
 
  return 0;
}
