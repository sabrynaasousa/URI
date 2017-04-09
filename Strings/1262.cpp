#include <bits/stdc++.h>

using namespace std;

int main(){

  string trace;
  int p, cont, contR;
  
  while( cin >> trace ){
    cin >> p;
    
    cont = 0, contR = 0;
    for( auto& v : trace ){
      if( v == 'W'){
        cont++;
        contR = 0;
      }  
      else{
        contR++;
        if( contR == 1 ){
          cont++;
        }
        if( contR > p ){
          cont++;
          contR = 1;
        }
      }  
    }
    cout << cont << endl;
  }
  
  return 0;
}
