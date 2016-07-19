#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (){
  int c;
  double cont;
  string palavra;

  cin >> c;

  for ( int i = 0; i < c; i++ ){
    cont = 0;  
    cin >> palavra;
    for ( int j = 0; j < palavra.size(); j++ ){
      cont ++;
    }
    cout << fixed << setprecision(2);
    cout << cont/100 << endl;
  } 
  return 0;
}
