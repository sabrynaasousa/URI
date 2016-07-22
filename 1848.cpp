#include <iostream>

using namespace std;

int main() {
    string caw;
    long sum = 0;

    while( cin >> caw ) {
        if( caw[0] == 'c' ) {
            cin >> caw;
            cout << sum << endl;
            sum = 0;
        }
        else{
          if( caw[0] == '*' ){
            sum += 4;
          }
          if( caw[1] == '*' ){
            sum += 2;
          }
          if( caw[2] == '*' ){
            sum += 1;
          }
        }
    }
    return 0;
}
