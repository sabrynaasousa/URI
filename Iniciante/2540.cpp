#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, v, sum;

	while(cin >> n){
		sum = 0;
		for(int i = 0; i < n; ++i){
			cin >> v;
			sum += v;
		}

		if(sum >= (2/3.0)*n)
			cout << "impeachment" << endl;
		else
			cout << "acusacao arquivada" << endl;
	}
}

