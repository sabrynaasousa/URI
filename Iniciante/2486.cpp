#include <bits/stdc++.h>

using namespace std;

using ii = pair<string, int>;

vector<ii>menu = {{" suco de laranja", 120}, {" morango fresco", 85}, {" mamao", 85}, {" goiaba vermelha", 70}, {" manga", 56}, {" laranja", 50}, {" brocolis", 34}};

int main(){
  int t, n;
  string line;
  
  while ( cin >> t and t != 0 ){
    getchar();
    
    int amt = 0;
    for( int i = 0; i < t; ++i ){
      cin >> n;
      getline( cin, line );
      
      for(auto& m : menu){
        if( m.first == line )
          amt += n * m.second;
      }
    }

    if( amt < 110 )
      cout << "Mais " << 110 - amt << " mg" << endl;
    else if ( amt >= 110 and amt <= 130 )
      cout << amt << " mg" << endl;
    else
      cout << "Menos " << amt - 130 << " mg" << endl;
  }
  return 0;
}
