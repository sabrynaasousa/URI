#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main (){

  int n;
  string livros;

  while (cin >> n){

    vector <string> l;

    for ( int i = 0; i < n; i++ ){
      cin >> livros;

      l.push_back(livros);
      sort ( l.begin(), l.end() );

    }

    for ( int j = 0; j < l.size(); j++ ){
      cout << l[j] << endl;
    }
  }
  return 0;
}
