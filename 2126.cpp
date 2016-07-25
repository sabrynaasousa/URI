#include <iostream>
#include <string>

using namespace std;

int main (){

  string n1, n2;
  int i, aux = 0, caso = 0, pos = 0;

  while ( cin >> n1 ){
    cin >> n2;
    caso ++;
    aux = 0;
    for ( i = 0; i < n2.size(); i++ ){
      if ( n2[i] == n1[0] ){
        //cout << "====" << n2[i] << "====" << i << endl;  
        int  k = 0, cont = 0;  
        for ( int j = i; j < i + n1.size(); j++ ){
          //cout << "n2 =" << n2[j] << n1[k] << endl;  
          if ( n2[j] == n1[k]){
            cont ++;
          }
          else{
            break;
          }
          k++;
        }
        if ( cont == n1.size() ){
          aux ++;
          pos = i + 1;
        }
      }
    }
    if ( aux == 0 ){
      cout <<"Caso #"<<caso<<":"<<endl;
      cout <<"Nao existe subsequencia"<<endl<<endl;
    }
    else{
      cout <<"Caso #"<<caso<<":"<<endl;
      cout <<"Qtd.Subsequencias: "<<aux<<endl;
      cout <<"Pos: "<<pos<<endl<<endl;
    }  
  }    
  return 0;
}
