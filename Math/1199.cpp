#include <bits/stdc++.h>

using namespace std;

int main(){
  string number;

  while( cin >> number and number != "-1"){
    if(number[1] != 'x'){
      int n = stoi(number);
      stringstream ss;
      ss << hex << n;
      string hex(ss.str());

      cout << "0x";
      for(auto& v : hex){
        if(isdigit(v))
          cout << v;
        else{
          cout << (char)toupper(v);
        }
      }
      cout << endl;
    }
    else{
      int decimal;
      stringstream ss;
      ss << number;
      ss >> hex >> decimal;
      cout << decimal << endl;
    }
  }
  return 0;
}
