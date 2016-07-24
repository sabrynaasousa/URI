#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (){

  int n, numero;

  cin >> n;

  vector <int> par;
  vector <int> impar;

  for ( int i = 0; i < n; i++ ){
    cin >> numero;

    if ( numero%2 == 0 ){
      par.push_back(numero);
    }
    else{
      impar.push_back(numero);
    }  
  }

  sort( par.begin(), par.end());  
  sort( impar.begin(), impar.end());  

  for ( int j = 0; j < par.size(); j++ ){
    cout << par[j]<< endl;
  }
  for ( int k = impar.size()-1; k >= 0; k-- ){
    cout << impar[k] << endl;
  }  

  return 0;
}

