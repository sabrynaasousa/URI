#include <bits/stdc++.h>

using namespace std;

map<char, int> histogram(const string& s){
  map<char, int> h;
  for (auto c : s)
    ++h[c];

  return h;
}

int main(){
  
  string vowels, line;
  int cont, i;
  
  while( cin >> vowels ){
    getchar();
    getline( cin, line );
    
    cont = 0;
    
    map<char, int> h = histogram(line);

    for( auto& v : vowels ){
      cont += h[v];
    }
    
    cout << cont << endl; 
  }
  return 0;
}
