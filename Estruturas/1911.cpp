#include<bits/stdc++.h>

using namespace std;

map<string, string> ass;

int main(){
	int n, m, diff, sigFalse;
	string student, signature;

	while(cin >> n and n){
		sigFalse = 0;
		while(n--){
			cin >> student >> signature;
			ass[student] = signature;
		}
		cin >> m;
		while(m--){
			cin >> student >> signature;
			string aux = ass[student];
			diff = 0;
			for(int i = 0; i < aux.size(); ++i){
				if(aux[i] != signature[i])
					diff++;
			}
			if(diff > 1)
				sigFalse++;
		}
		cout << sigFalse << endl;
	}
	return 0;
}
