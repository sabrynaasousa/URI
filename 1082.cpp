#include <bits/stdc++.h>
#define MAX 1024

using namespace std;

vector<char> graph[MAX];
vector<char> comp[MAX];
bool visited[MAX];

vector<char> letras = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
vector<char> :: iterator it;

void dfs( int u, int cont ){
  visited[u] = true;
  for( auto& v : graph[u] ){
    if( not visited[v] ){
      dfs( v, cont );
    }  
  }
  comp[cont].push_back( letras[u] );  
}


int main(){
  int n, v, e;
  
  cin >> n;
  
  for( int i = 1; i <= n; i++ ){
    cin >> v >> e;
    memset( visited, false, sizeof visited );
       
    for( int j = 1; j <= e; j++ ){
      char u, t;
      cin >> u >> t;

      it = find( letras.begin(), letras.end(), u );
      int a = distance( letras.begin(), it );
      
      it = find( letras.begin(), letras.end(), t );
      int b = distance( letras.begin(), it );
      
      graph[a].push_back(b);
      graph[b].push_back(a);
        
    }
    
    int cont = 0;
    cout << "Case #" << i << ":" << endl;
    for( int u = 1; u <= v; u++ ){
      if( not visited[u] ){
        dfs( u, cont );
        cont++; 
      }
    }
    
    for( int i = 0; i < cont; i++ ){
      sort( comp[i].begin(), comp[i].end() ); 
    }
    
    for( int j = 0; j < cont; j++ ){
      for( auto& v : comp[j] ){
        cout << v << ",";
      }
      cout << endl;
    }
    
    cout << cont << " connected components" << endl;
    cout << endl;
    
    for( int i = 1; i <= v; i++ ){
      graph[i].clear();
    }
    for( int j = 0; j <= cont; j++ ){
      comp[j].clear();
    }
    
  }
  return 0;
}
