#include <iostream>

using namespace std;

int main (){

  int n, aux = 0;  
  cin >> n; 

  if ( n >= 900 ){
    n = n - 900;  
    cout << "CM";
  }
  if ( n >= 500 ){
    n = n - 500;  
    cout << "D";
  }
  if ( n >= 400 ){
    n = n - 400;
    cout << "CD";
  }
  if ( n >= 100 ){
    aux = n;  
    for ( int i = 0; i < aux/100; i++ ){
      cout << "C";
      n = n - 100;
    }
  }
  if ( n >= 90 ){
    n = n - 90;  
    cout << "XC";
  }
  if ( n >= 50 ){
    cout << "L";
    n = n - 50;
  }
  if ( n >= 40 ){
    cout << "XL";
    n = n - 40;
  }
  if ( n >= 10 ){
    aux = n;  
    for ( int j = 0; j < aux/10; j++ ){
      cout << "X";
      n = n - 10;
    }
  }
  if ( n == 9 ){
    cout << "IX";
    n = n - 9;
  }
  if ( n >= 5 ){
    cout << "V";
    n = n - 5;
  }
  if ( n == 4 ){
    cout << "IV";
    n = n - 4;
  }
  if ( n < 4 ){
    aux = n;  
    for ( int k = 0; k < aux/1; k++ ){
      cout << "I";
      n = n - 1;
    }
  }

  cout << endl;

  return 0;
}
