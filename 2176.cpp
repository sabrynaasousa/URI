#include <bits/stdc++.h>

using namespace std;

int main (){

  string s;
  int cont;
  
  cin >> s;

  for (int i = 0; i < s.size(); i++){
    if (s[i] == '1')
      cont++;
  }
  
  if (cont%2 == 0)
    cout << s << "0" << endl;
  else
    cout << s << "1" << endl;  
   
  return 0;
}
