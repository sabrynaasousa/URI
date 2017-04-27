#include <bits/stdc++.h>

using namespace std;

map<string, double> market;

int main(){
	int n, m, p;
	double price, amt, t;
	string product, prod;
	cin >> n;

	while(n--){
		market.clear();
		t = 0;
		cin >> m;
		for(int i = 0; i < m; ++i){
			cin >> product >> price;
			market[product] = price;
		}
		cin >> p;
		for(int i = 0; i < p; ++i){
			cin >> prod >> amt;
			if(market[prod] != 0)
				t += market[prod]*amt;
		}

		cout << "R$ " << fixed << setprecision(2) << t << endl;
	}
	return 0;	
}
