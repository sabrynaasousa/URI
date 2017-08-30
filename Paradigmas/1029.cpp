#include <bits/stdc++.h>

using namespace std;

int cont;

int fib(int n){
	cont++;
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	else	
		return fib(n-1) + fib(n-2);
}

int main(){
	int n, x;

	while(cin >> n){
		for(int i = 0; i < n; ++i){
			cin >> x;
			cont = 0;	
			cout << "fib(" << x << ") = " << cont-1 << " calls = " << fib(x) << endl;
		}
	}
}
