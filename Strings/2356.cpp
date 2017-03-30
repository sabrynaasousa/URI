#include <bits/stdc++.h>

using namespace std;

int main(){
  string d, s;

  while( cin >> d >> s ){
    auto p = d.find( s );
    if ( p != std::string::npos )
      cout << "Resistente" << endl; 
    else
      cout << "Nao resistente" << endl;
  }
  return 0;
}
