#include <iostream>
#include <vector>

using namespace std;

int main (){
   
  int n, d, i, j, x[501][501], cont;

  while ( cin >> n >> d && n != 0 ){
    for ( i = 0; i < d; i++ ){
      for ( j = 0; j < n; j++ ){
        cin >> x[i][j];
      }
    }
    int aux = 0;
    for ( j = 0; j < n; j++ ){
      cont = 0; 
      for ( i = 0; i < d; i++ ){
        cont += x[i][j];
      }
      if ( cont == d ){
        cout << "yes" << endl;
        aux = 1;
        break;
      }
    }
    if ( aux != 1 ){
      cout << "no" << endl;
    }  
  }  
  return 0;
}
