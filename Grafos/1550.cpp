#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;

vector<int> dist(10010);

int reverse( int number ){
  int reverseNumber = 0;
  
  while( number > 0 ) {
    reverseNumber *= 10;
    reverseNumber += number%10;
    number /= 10;
  }
  
  return reverseNumber;
}

int bfs( int source, int destination ){
  queue<int> q;
  fill( dist.begin(), dist.end(), oo );
  dist[source] = 0;
  q.push( source );
  while( not q.empty() ){
    int u = q.front(); q.pop();
    
    if( u == destination ){
      return dist[u];
      break;
    }
    if( u + 1 <= 10000 && dist[u + 1] == oo ){
      dist[u + 1] = dist[u] + 1;
      q.push(u + 1);
     
    }
    if( reverse(u) <= 10000 && dist[reverse(u)] == oo ){
      dist[reverse(u)] = dist[u] + 1;
      q.push( reverse(u));
    }
  }
}

int main(){
  int t, a, b;
  
  cin >> t;
  
  while( t-- ){
    cin >> a >> b;
    cout << bfs( a, b ) << endl;
  }
  
  return 0;
}
