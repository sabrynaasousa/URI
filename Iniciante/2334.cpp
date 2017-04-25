#include <bits/stdc++.h>

using namespace std;

int main(){
  unsigned long long int n;
  
  while( cin >> n and n != -1 ){
    if( n > 0 )
      cout << n - 1 << endl;
    else
      cout << 0 << endl;
  }
  
  return 0;
}
