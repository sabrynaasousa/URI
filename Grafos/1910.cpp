#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;

vector<int> dist(1000010);
vector<int> canais;
vector<int>::iterator it;

int bfs( int source, int destination ){
  queue<int>q;
  fill( dist.begin(), dist.end(), oo );
  dist[source] = 0;
  q.push(source);
  while( not q.empty() ){
  	int u = q.front(); q.pop();
    if( dist[destination] != oo ){
      return dist[destination];
    }
    if( u*2 > 0 and u*2 <= 100000 ){
			if( dist[u*2] == oo ){
		    it = find( canais.begin(), canais.end(), u*2 );
		    if( it == canais.end() ){
		      dist[u*2] = dist[u] + 1;
		      q.push( u*2 );
		    }
			}  
    }
    if( u*3 > 0 and u*3 <= 100000 ){
			if( dist[u*3] == oo ){
		    it = find( canais.begin(), canais.end(), u*3 );
		    if( it == canais.end() ){
		      dist[u*3] = dist[u] + 1;
		      q.push( u*3 );
		    }
			}
    }
    if( u/2 > 0 and u%2 == 0 and u/2 <= 100000 ){
			if( dist[u/2] == oo ){
		    it = find( canais.begin(), canais.end(), u/2 );
		    if( it == canais.end() ){
		      dist[u/2] = dist[u] + 1;
		      q.push( u/2 );
		    }
			}
    }
    if( u+1 > 0 and u+1 <= 100000 ){
			if( dist[u+1] == oo ){
		    it = find( canais.begin(), canais.end(), u+1 );
		    if( it == canais.end() ){
		      dist[u+1] = dist[u] + 1;
		      q.push( u+1 );
		    }  
			}
    }
    if( u-1 > 0 and u-1 <= 100000 ){
			if( dist[u-1] == oo ){
		    it = find( canais.begin(), canais.end(), u-1 );
		    if( it == canais.end() ){
		      dist[u-1] = dist[u] + 1;
		      q.push( u-1 );
		    }
    	}
		}
  }
  
  return -1;
}

int main(){
  int o, d, k, c;
    
  while( cin >> o >> d >> k and o != 0 and d != 0 ){
  
    for( int i = 0; i < k; ++i ){
      cin >> c;
      canais.push_back(c);
    }
    cout << bfs( o, d ) << endl;
    canais.clear();
  }
  return 0;
}
