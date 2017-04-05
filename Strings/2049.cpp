#include <bits/stdc++.h>

using namespace std;

int occurrences(const string& text, const string& pat)
{
  int n = text.size();
  int m = pat.size();

  int occ = 0;    // Número de ocorrências de pat em text

  for (int i = 0; i <= n - m; ++i) 
    occ += (pat == text.substr(i, m) ? 1 : 0);

  return occ;
}

int main(){
  string a, panel;
  int test = 0;
  
  while( cin >> a && a != "0" ){
    test++;
    
    if( test != 1 )
      cout << endl;
      
    cin >> panel;
    
    int occ = occurrences( panel, a );
    
    cout << "Instancia " << test << endl;
    if( occ == 0 )
      cout << "falsa" << endl;
    else
      cout << "verdadeira" << endl;  
  }
}
