#include <bits/stdc++.h>
#define MAX 50

using namespace std;

int tempo[MAX], quantidade[MAX], n;

int dp(int id, int capacidade){
  if(capacidade == 0){
    return 0;  
  }
  if(id == n){
    return 0;  
  }
  if(quantidade[id] > capacidade){
    return dp(id+1, capacidade);  
  }
  if(quantidade[id] <= capacidade){
    return max(dp(id+1, capacidade), tempo[id] + dp(id+1, capacidade - quantidade[id]));  
  }   
}
int main(){
  int p;

  while(cin >> n and n){
    cin >> p;
    for(int i = 0; i < n; ++i){
      cin >> tempo[i] >> quantidade[i];  
    }
    cout << dp(0, p) << " min." << endl;  
  }
  return 0;
}
