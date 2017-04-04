#include <bits/stdc++.h>

using namespace std;

vector<string> a;

int main(){
  int t, n;
  string names, frequence;
  
  cin >> t;
  
  while( t-- ){
    cin >> n;
    getchar();
    
    getline( cin, names );
    
    istringstream is( names );
    string student;
    
    while( is >> student ){
      a.push_back( student );
    }
    
        
    getline( cin, frequence );
    istringstream it( frequence );
    string freq;
    
    int k = 0, ans = 0;
    
    while( it >> freq ){
      int cont = 0, classes = 0;
      k++;
      for( auto&v : freq ){
        if( v == 'A'){
          cont++;
          classes++;
        }else if( v == 'P' ){
          classes++;
        }  
      }
      double f = 1 - ( double )cont/classes;
      if( f  < 0.75 && ans == 0 ){
        cout << a[k-1];
        ans++;
      }else if ( f  < 0.75 && ans != 0){
        cout << " " << a[k-1];
      }
    }
    
    a.clear();
      
    cout << endl;
      
  }
  
  return 0;
}
