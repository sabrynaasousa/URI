#include <iostream>
#include <cstdio>

using namespace std;

int main (){
  int mes, dia, total = 0;

  while ( cin >> mes >> dia ){
    total = 0;  
    if ( mes == 12 && dia == 24 ){
      cout << "E vespera de natal!" << endl;
    }
    else if ( mes == 12 && dia == 25 ){
      cout << "E natal!" << endl;
    }
    else if ( mes == 12 && dia >= 25 ){
      cout << "Ja passou!" << endl; 
    }
    else {
      for (int i = 1; i < mes; i++ ){  
        if ( i  == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12 ){
          total += 31;
        }
        else if ( i == 2 ){
          total += 29;
        }
        else{
          total += 30;
        }
      }
      total += dia;
      total = 360 - total ;
      cout << "Faltam " << total << " dias para o natal!" << endl;
    }
  }
  return 0;
}
