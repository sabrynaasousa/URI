#include <bits/stdc++.h>

using namespace std;

int main(){
  string alpha;
  int n, letter;
  
  while( cin >> alpha ){
    cin >> n;
    for( int i = 0; i < n; ++i ){
      cin >> letter;
      cout << alpha[letter-1];    
    }
    cout << endl;
  }
  return 0;
}
