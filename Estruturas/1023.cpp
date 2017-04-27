#include <bits/stdc++.h>

using namespace std;

map<int, int> consumption;

int main(){
	int n, x, y, count = 0;
	double sumX, sumY;

	while(cin >> n and n){
		if(count != 0)
			cout << endl;

		sumX = 0, sumY = 0;
		consumption.clear();
		count += 1;

		for(int i = 0; i < n; ++i){
			cin >> x >> y;
			sumX += x;
			sumY += y;
			if(consumption[y/x] != 0)
				consumption[y/x] += x;
			else
				consumption[y/x] = x;
		}
		cout << "Cidade# " << count << ":" << endl;
		int i = 0;
		for(auto& v : consumption){
			i++;
			cout << v.second << "-" << v.first;
			if(i == consumption.size())
				cout << endl;
			else
				cout << " ";
		}

		cout << "Consumo medio: " << fixed << setprecision(2) << floor((sumY/sumX)*100)/100 << " m3." << endl;
	}
	
	return 0;
}
