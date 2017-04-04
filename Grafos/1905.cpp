#include <bits/stdc++.h>
#define MAX 10

using namespace std;

using ii = pair<int, int>;
vector<ii> graph[MAX][MAX];
vector<ii>movements{{-1,0}, {0,1}, {1,0}, {0,-1}};

bool visited[MAX][MAX];

int grid[MAX][MAX];

void dfs (int x, int y){
  visited[x][y] = true;
  for( auto& v : graph[x][y] ){
    if( not visited[v.first][v.second] ){
      dfs( v.first, v.second );
    }
  }
}

int main (){
  int t, cont;
  
  scanf("%d\n", &t);
  
  for( int k = 0; k < t; ++k ){
    memset( grid, '1', sizeof grid );
    memset( visited, false, sizeof visited );
    
    for( int i = 1; i <= 5; ++i ){
      for( int j = 1; j <= 5; ++j ){
        cin >> grid[i][j];
      }
    }
 
     
    for( int x = 1; x <= 5; ++x ){
      for( int y = 1; y <= 5; ++y ){
         if( grid[x][y] == 0){
            for( auto& move : movements ){
              int dx = move.first, dy = move.second;
              if( grid[x + dx][y + dy] == 0 ){
                graph[x][y].push_back( make_pair( x + dx, y + dy ));
              }
            }
         }
      }
    }
    
    dfs( 1, 1 );
    if( visited[5][5] == false )
      cout << "ROBBERS" << endl;
    else
      cout << "COPS" << endl;
     
    for( int i = 0; i <= 5; ++i ){
      for( int j = 0; j <= 5; ++j ){
        graph[i][j].clear();
      }
    }  
   } 
 
  return 0; 
}
