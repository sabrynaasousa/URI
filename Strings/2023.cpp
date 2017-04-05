#include <bits/stdc++.h>

using namespace std;

string transform( string name ){
  for( auto& v : name ){
    v = tolower(v);
  }
  
  return name;
}

int main(){

  string line, aux = "";
  
  while( getline( cin, line )){
    if( transform(line) > transform(aux) ){
      aux = line;
    }
  }

  cout << aux << endl;
  
  return 0;
}

