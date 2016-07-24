#include <iostream>
#include <string>

using namespace std;

int main (){

  string s1, s2;

  while ( getline( cin, s1 )){
    getline( cin, s2 );

    int max = 0, cont;

    for ( int i = 0; i < s1.size(); i++ ){
      for ( int j = 0; j < s2.size(); j++ ){
        if ( s1[i] == s2[j] ){
          cont = 0;
          for ( int k = 0; k+i < s1.size(), k+j < s2.size(); k++ ){
            if ( s1[k+i] == s2[k+j] ){
              cont ++;
            }
            else{
              break;
            }
          }

          if ( cont > max ){
            max = cont;
          }
        }
      }
    }

    cout << max << endl;
  }
  return 0;
}
