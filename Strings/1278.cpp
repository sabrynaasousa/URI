#include <bits/stdc++.h>

using namespace std;

int main (){

  int n, size, maxSize, cont = 0;
  string line;
  vector <string> s;

  while ( cin >> n && n != 0){
    getchar();
    maxSize = 0, cont++;
    
    if( cont != 1 )
      cout << endl;
      
    for ( int i = 0; i < n; ++i ){
      size = 0;
      getline( cin, line );
           
      istringstream is( line );
      string word, str;
      
      while( is >> word ){
        str += word + ' ';
        size = str.size();
      }
      
      str.pop_back(); 
      s.push_back( str ); 

      if( (size - 1) > maxSize )
        maxSize = size - 1;
    } 
    
    int justify = 0;
    for( int i = 0; i < n; ++i ){
      if( maxSize == s[i].size() ){
        cout << s[i] << endl;
      }
      else{
        justify = maxSize - s[i].size();
        for( int i = 0; i < justify; ++i ){
          cout << " ";
        }
        cout << s[i] << endl;
      }
             
    }
     s.clear();
  } 
  
  return 0;   
}
