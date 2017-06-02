#include<bits/stdc++.h>

using namespace std;

map<char, float> notes = {{'W', 1}, {'H', 0.5}, {'Q', 0.25}, {'E', 0.125}, {'S', 0.0625}, {'T', 0.03125}, {'X', 0.015625}};

int main(){
	string line;
	float bars = 0;
	int barsT = 0;

	while(cin >> line and line != "*"){
		istringstream is(line);
		string token;

		barsT = 0;
		while(getline(is, token, '/')){
			bars = 0;
			for(auto& s : token){
				bars += notes[s];
			}
			if(bars == 1)
				barsT++;
		}
		cout << barsT << endl;
	}
	return 0;
}
