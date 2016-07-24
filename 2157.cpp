#include <iostream>

using namespace std;

int main (){

  int c, b, e, i;

  cin >> c;

  for ( i = 0; i < c; i++ ){
    cin >> b >> e;
    string seq;
    for ( int j = b; j <= e; j++ ){
      seq += to_string(j);    
    }
    cout << seq;
    for ( int k = seq.size()-1; k >=0 ; k-- ){
      cout << seq[k];
    }
    cout << endl;
  }
  return 0;
}
