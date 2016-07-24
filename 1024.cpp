#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main (){

  int n, i;
  string m;

  cin >> n;
  getchar();

  for ( i = 0; i < n; i++ ){
    getline ( cin, m );

    for ( int j = 0; j < m.size(); j++ ){
      if ( (m[j] >= 'A' && m[j] <= 'Z') || (m[j]) >= 'a' && m[j] <= 'z'){
        m[j] = m[j] + 3;
      }  
    }
    reverse ( m.begin(),  m.end());
    for ( int l = m.size()/2; l < m.size(); l++ ){
      m[l] = m[l] -  1;
    }
    cout <<  m << endl;
    
  } 
  return 0;
}
