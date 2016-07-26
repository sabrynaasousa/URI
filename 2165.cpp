#include <iostream>
#include <string>

using namespace std;

int main (){

  string t;

  getline ( cin, t );

  if ( t.size() <= 140 ){
    cout << "TWEET" << endl;
  }
  else{
    cout << "MUTE" << endl;
  }

  return 0;    
}

