#include <iostream>

using namespace std;

int main (){

    long long int n, i, r, aux = 0, res = 0;

    cin >> n;
    for ( i = 0; i < n; i++ ){
        cin >> r;
        if ( r < aux && res == 0 ){
          res = i + 1;
        }

        aux = r;
    }  

    cout << res << endl;

    return 0;
}
