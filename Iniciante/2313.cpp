#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int a, b, c, x, y, z;
  
  cin >> a >> b >> c;

	x = max(a, max(b, c));
	z = min(a, min(b, c));
	y = a + b + c - x - z;
  
  if((a + b) <= c || (a + c) <= b || (c + b) <= a){
		cout << "Invalido" << endl;
	}
	else{
		if(a == b and b == c)
			cout << "Valido-Equilatero" << endl;
		else if(a == b || b == c || a == c)
			cout << "Valido-Isoceles" << endl;
		else
			cout << "Valido-Escaleno" << endl;

		if(pow(x, 2) == (pow(y, 2) + pow(z, 2)))
			cout << "Retangulo: S" << endl;
		else
			cout << "Retangulo: N" << endl;
	}
  return 0;
}
