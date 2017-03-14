#include <iostream>
#include <math.h>

using namespace std;

int main (){
  
  double x,f;
  int n;
  
  x = sqrt(5);
  
  cin >> n;

  f = (pow((1 + x)/2 , n) - pow((1 - x)/2, n))/x;
  
  printf ("%.1f\n", f);
  return 0;
}
