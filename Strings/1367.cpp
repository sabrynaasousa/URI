#include <bits/stdc++.h>

using namespace std;

int subm[255];

int main(){
  int n, t, s, p;
  char problem;
  string judge;

  while ( cin >> n && n != 0 ){

    s = 0, p = 0;
    memset( subm, 0, sizeof subm );
    while( n-- ){
      cin >> problem >> t >> judge;
      if( judge == "correct" ){
        s++;
        p += ( t + subm[problem] );
      } else {
        subm[problem] += 20;
      }
    }

    cout << s << " " << p << endl;
  }

  return 0;
}
