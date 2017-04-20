#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, k, max;
	string num;

	while(cin >> n and n){
		max = pow(2, ((n - 1) + (n -1)));
		num = to_string(max);
		k = num.size();
		for(int i = 0; i < n; ++ i){
			for(int j = 0; j < n; ++j){
				if(j)
					cout << ' ';
				
				long double x = pow( 2, (i + j));
				cout << right << setw(k) << setprecision(0) << fixed << x;
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
