#include <bits/stdc++.h>

using namespace std;

bool occurrences( const string& text, const string& pat ){
    int n = text.size();
    int m = pat.size();
    
    int occ = 0; // Número de ocorrências de pat em text

    for( int i = 0; i <= n - m; ++i ) 
        occ += (pat == text.substr(i, m) ? 1 : 0);
        
    if( occ > 0 )
      return true;
    else
      return false;  
}

int main(){

  string line, n;
  int tam;
  
  getline( cin, n );
    
  for( int i = 0; i < stoi(n); ++i ){
    getline( cin, line );
    
    istringstream is( line );
    string word;
    
    tam = 0;
    while( is >> word ){
      tam += (word.size() + 1);
      if ( occurrences( word, "oulupukk")) {
        if( word[word.size() - 1] == '.' && word.size() <= 11 )
          cout << "Joulupukki.";
        else
          cout << "Joulupukki";
      }
      else{
        cout << word;
      }
      
      if( tam > line.size() )
        cout << endl;
      else
        cout << " ";  
    }
        
  }
  
  return 0;
}
