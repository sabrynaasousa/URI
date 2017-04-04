#include <bits/stdc++.h>

using namespace std;

int main(){
  string password;
  
  while( getline( cin, password )){
    
    int invalid = 0, contNumber = 0, contAlphaUpper = 0, contAlphaLower = 0;
    
    if( password.size() < 6 || password.size() > 32 ){
      invalid = 1;
    }
    else {
      for( auto& v : password ){
        if( isalnum(v) == 0 ){
          invalid = 1;
          break;
        }
        if( isdigit(v) != 0 ){
          contNumber++;
        }
        else if( isupper(v) != 0 ){
          contAlphaUpper++;
        }  
        else if( isupper(v) == 0){
          contAlphaLower++;
        }
      }  
    }
    
    if( invalid == 1 || contNumber == 0 || contAlphaUpper == 0 || contAlphaLower == 0 )
      cout << "Senha invalida." << endl;
    else
      cout << "Senha valida." << endl;  
  }
  
  return 0;
}
