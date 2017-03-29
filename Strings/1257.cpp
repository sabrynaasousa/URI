#include <bits/stdc++.h>

using namespace std;

vector<char> letras = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
vector<char> :: iterator it;

int main(){

  int n, l;
  string string;
  
  cin >> n;
  
  while( n-- ){
    cin >> l;
    
    int total = 0;
    
    for( int i = 0; i < l; ++i ){
      cin >> string;
      for( int j = 0; string[j]; ++j ){
        it = find( letras.begin(), letras.end(), tolower(string[j]) );
        int a = distance( letras.begin(), it );
        total += ( a + i + j);
      }
    }
    
    cout << total << endl;
  }
  
  return 0;
}

