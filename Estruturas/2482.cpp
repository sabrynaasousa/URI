#include<bits/stdc++.h>

using namespace std;

map <string, string> letters;

int main(){
	int n, m;
	string language, christmas, name;

	cin >> n;
	getchar();
	for(int i = 0; i < n; ++i){
		cin >> language;
		getchar();
		getline(cin, christmas);
	
		letters[language] = christmas;
	}
	
	cin >> m;
	getchar();
	for(int j = 0; j < m; ++j){
		getline(cin, name);
		cin >> language;
		getchar();
	
		cout << name << endl;
		cout << letters[language] << endl << endl;
	}
	
	return 0;
}
