#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
  int n;
  
  cin >> n;
  getchar();
  
  while( n-- ){
    string dieta, cafe, almoco, str = " ", res, cheater;
    getline( cin, dieta );
    getline( cin, cafe );
    getline( cin, almoco );
    str = cafe + almoco;

    remove_copy_if(dieta.begin(), dieta.end(), back_inserter( res ), [&](char c)
      {
        const string cardapio { str };
        return cardapio.find(c) != string::npos;
      }
    );

   remove_copy_if(str.begin(), str.end(), back_inserter( cheater ), [&](char c)
      {
        const string cdp { dieta };
        return cdp.find(c) != string::npos;
      }
    );
    
    if( cheater != "" ){
      cout << "CHEATER" << endl;
    } else{
      sort( res.begin(), res.end() );
      cout << res << endl;
    }
  }
  return 0;
}

