#include <bits/stdc++.h>

using namespace std;

string music[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

int main(){
	int c, x, y;

	cin >> c;
	for(int i = 0; i < c; ++i){
		cin >> x >> y;
		cout << music[x + y] << endl;
	}
	return 0;
}
