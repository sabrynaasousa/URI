#include <iostream>

using namespace std;

int main (){
  int t, n, i, total;

  while ( cin >> t && t != 0 ){
    for ( i = 0; i < t; i++ ){
      cin >> n;
      total = 0;
      if ( n%2 == 0 ){
        total = ( n - 2 )*2 + 2;
      }
      else {
        total = ( n - 1 )*2 + 1;
      }

      cout << total << endl;
    }
  }
  return 0;
}
