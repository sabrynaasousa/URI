#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){

  int n;
  double p, m;

  cin >> n;
  p = n/log(n);
  m = 1.25506*n/log(n);

  printf ("%.1f %.1f\n", p, m);
  return 0;
}
