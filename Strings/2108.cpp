#include <bits/stdc++.h>

using namespace std;

int main(){
  
  string line, wordMax;
  int max = 0;
  
  while( getline( cin, line) ){
  
    if( line == "0"){
      cout << endl;
      cout << "The biggest word: " << wordMax << endl;
      break;
    }
    
    string word;
    istringstream is( line );
   
    vector<int> sizeWord;
    
    while( is >> word ){
      sizeWord.push_back( word.size() );
      if( word.size() >= max ){
        max = word.size();
        wordMax = word;  
      }
    }
    
    for( int i = 0; i < sizeWord.size(); ++i ){
      if( i != 0 )
        cout << "-";
        
      cout << sizeWord[i];

    }
    
    cout << endl;
  }
  return 0;
}
