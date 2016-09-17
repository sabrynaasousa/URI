#include <bits/stdc++.h>

using namespace std;

using Point = pair<double, double>;
vector <Point> cerejas;

class Line {
  public:
    double a;
    double b;
    double c;

    Line( double av, double bv, double cv ) : a(av), b(bv), c(cv) {}

    Line( const Point& p, const Point& q ){
      a = p.second - q.second;
      b = q.first - p.first;
      c = p.first * q.second - p.second * q.first;

      auto k = a ? a : b;

      a /= k;
      b /= k;
      c /= k;
    }
    
    double distance( const Point& p)  const{
      return fabs( a*p.first + b*p.second + c )/hypot( a, b );
    }

    double det(const Point& P, const Point& Q, const Point& R ){
      return (( P.second - Q.second )*R.first + ( Q.first - P.first)*R.second + ( P.first*Q.second - Q.first*P.second ));
    }
};

int main (){

  Point coordenada;
  int n;
   
  while ( cin >> n && n != 0 ){
    for ( int i = 0; i < n; i++ ){
      cin >> coordenada.first >> coordenada.second;
      cerejas.push_back( coordenada );
    }
    
    double dir = 0, esq = 0, menor = 9999999;
    
    for ( int i = 0; i < n; i++ ){
      for ( int j = 0; j < n; j++ ){
        if ( i == j )
          continue;
        
        Line line ( cerejas[i], cerejas[j] );
            
        for ( int k = 0; k < n; k++ ){
          double det = line.det( cerejas[i], cerejas[j], cerejas[k] );
          double dist = line.distance( cerejas[k] );
          if ( det > 0 )  
            dir += fabs( dist );
          else {
            esq += fabs( dist );
           }          
        }
         
        double res = fabs ( esq - dir );
        
        if ( res < menor )
          menor = res;
        
        dir = 0, esq = 0;
      }
    }
    printf("%.3lf\n", menor );
    cerejas.clear();
  }
  
  return 0;
} 
