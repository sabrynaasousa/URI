#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, l, w, aux, count, wagons[60];
	
	cin >> n;
	while(n--){
		cin >> l;
		count = 0;
		for(int i = 0; i < l; ++i){
			cin >> w;
			wagons[i] = w;
		}
		for(int i = 0; i < l; i++){
			for(int j = i + 1; j < l; ++j){
				if(wagons[i] > wagons[j]){
					aux = wagons[i];
					wagons[i] = wagons[j];
					wagons[j] = aux;
					count++;
				}
			}
		}	
		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}
	return 0;
}
