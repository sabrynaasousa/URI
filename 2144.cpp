#include <iostream>

using namespace std;

int main (){

  int w1, w2, m1, m2, media, cont = 0, total, r;

  while ( cin >> w1 >> w2 >> r &&w1 &&w2 &&r ){
    m1 = 0, m2 = 0, total = 0;  
    m1 =  w1 + ( w1 * r/30 );     
    m2 =  w2 + ( w2 * r/30 );  
    
    total = ( m1 + m2 )/2;
    media += total;
    cont++;

    if ( total >= 1 && total < 13 ){
      cout << "Nao vai da nao" << endl;
    }
    else if ( total >= 13 && total < 14 ){
      cout << "E 13"<< endl;
    }
    else if ( total >= 14 && total < 40 ){
      cout << "Bora, hora do show! BIIR!"<<endl;
    }
    else if ( total >= 40 && total <= 60 ){
      cout << "Ta saindo da jaula o monstro!"<<endl;
    }
    else if ( total > 60 ){
      cout << "AQUI E BODYBUILDER!!"<<endl;
    }
  }

  if ( media/cont ){
    cout << endl; 
    cout << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
  }
  return 0;
}
