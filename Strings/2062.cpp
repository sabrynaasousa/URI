#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  string word;

  cin >> n;

  for( int i = 0; i < n; i++ ){
    cin >> word;
    
    if( word.size() == 3 && ( word[0] == 'O' && word[1] == 'B' )){
      cout << "OBI";
    } else if( word.size() == 3 && ( word[0] == 'U' && word[1] == 'R' )){
      cout << "URI";
    } else {
      cout << word;
    }

    if( i != ( n - 1 )){
      cout << " ";
    }
  }
  
  cout << endl;

  return 0;
}
