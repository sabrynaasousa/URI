#include <iostream>
#include <string>

using namespace std;

int main (){

  int n, i;
  string f;

  cin >> n;
  getchar();

  for ( i = 0; i < n; i++ ){
    getline( cin, f);
    for ( int j = f.size()/2 - 1; j >=  0; j-- ){
      cout << f[j];
    }
    for ( int k = f.size() - 1; k >= f.size()/2; k-- ){
      cout << f[k];
    }

    cout << endl;
  }
}
