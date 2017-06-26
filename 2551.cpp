#include <bits/stdc++.h>

using namespace std;

vector<int> days;

int main(){
	int n, t, d;

	while(cin >> n){
		double max = 0;
		days.clear();
		for(int i = 1; i <= n; ++i){
			cin >> t >> d;
			double v = (double) d/t;
			if(v > max){
				max = v;
				days.push_back(i);
			}
		}
		for(int i = 0; i < days.size(); ++i){
			cout << days[i] << endl;
		}
	}
	return 0;
}
