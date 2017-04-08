#include <bits/stdc++.h>

using namespace std;

int main (){

  int n, size, cont = 0;
  string word;
  vector <string> s;

  while ( cin >> n && n != 0){
    getchar();
    size = 0;

    cont++;
    
    if( cont != 1 )
      cout << endl;
      
    for ( int i = 0; i < n; ++i ){
      cin >> word;
      s.push_back(word);
      
      if( word.size() > size )
        size = word.size();
    } 
    
    for( int i = 0; i < n; ++i ){
      int justify = size - s[i].size();
      if( justify == 0 ){
        cout << s[i] << endl;
      }
      else{
        for( int j = 0; j < justify; ++j ){
          cout << " ";
        }
        cout << s[i] << endl;
      }
    }
    s.clear();
  }
}
