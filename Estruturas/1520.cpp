#include<bits/stdc++.h>

using namespace std;

vector<int> aux;

int main(){
	int n, x, y, num;
		
	while(cin >> n){
		aux.clear();
		while(n--){
			cin >> x >> y;
			for(int i = x; i <= y; i++){
				aux.push_back(i);
			}
		}
		sort(aux.begin(), aux.end());
		cin >> num;
		vector<int>::iterator begin, end;
		begin = lower_bound(aux.begin(), aux.end(), num);
		end = upper_bound(aux.begin(), aux.end(), num);
		
		if(begin < end)
			cout << num << " found from " << begin - aux.begin() << " to " << end - aux.begin() - 1 << endl;
		else
			cout << num << " not found" << endl;
	}
	return 0;
}
