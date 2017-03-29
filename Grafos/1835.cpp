#include <bits/stdc++.h>
#define MAX 1000000

using namespace std;

vector<int>graph[MAX];
bool visited[MAX];

void dfs(int u){
  visited[u] = true;
  for( auto& v : graph[u] ){
    if( not visited[v] ){
      dfs(v);
    }  
  }
}

int main (){

  int t, n, m, u, v;
    
  cin >> t;
    
  for( int i = 1; i <= t; i++ ){
  
      memset( visited, false, sizeof visited );
      cin >> n >> m;
        
      for( int j = 1; j <= m; j++ ){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);  
      }
      
      int cont = 0;
      
      for( int u = 1; u <= n; u++ ){
        if( not visited[u] ){
          dfs(u);
          cont++;
        }
      }
      
      
      if( cont == 1 ){
        cout << "Caso #" << i << ": a promessa foi cumprida" << endl;
      }else{
        cout << "Caso #" << i << ": ainda falta(m) " << cont-1 << " estrada(s)" << endl;
      }  
      
      for( int j = 1; j <= n; j++ ){
         graph[j].clear();
      }
  }
  return 0;
}

