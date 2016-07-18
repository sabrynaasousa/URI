#include <iostream>

using namespace std;

int main (){
  int test, h, m, o;

  cin >> test;

  for ( int i = 0; i < test; i++ ){
    cin >> h >> m >> o;
    if ( h < 10 ){
      cout << "0" << h;    
    }
    else{
      cout << h;
    }
    cout << ":";
    if ( m < 10 ){
      cout << "0" << m;    
    }
    else{
      cout << m;
    }    
    cout << " - ";
    if ( o == 1 ){
      cout << "A porta abriu!"<< endl;
    }
    else{
      cout << "A porta fechou!"<< endl;
    }
  }
  return 0;
}
