#include <bits/stdc++.h>

using namespace std;

vector<int> nt;

int main(){
	int n, q, nota, pos;
	
	while(cin >> n >> q){
		nt.clear();
		for(int i = 0; i < n; ++i){
			cin >> nota;
			nt.push_back(nota);
		}
		sort(nt.rbegin(), nt.rend());
		for(int j = 0; j < q; ++j){
			cin >> pos;
			cout << nt[pos - 1] << endl;
		}
	} 
	return 0;
}
