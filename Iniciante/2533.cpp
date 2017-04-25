#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n, c;

	while(cin >> m){
		double sumN = 0, sumC = 0;	
		for(int i = 0; i < m; ++i){
			cin >> n >> c;
			sumN += (n*c);
			sumC += c;
		}
		double t = (sumN/(sumC * 100));
		printf("%.4f\n", t);
	}

	return 0;
}
