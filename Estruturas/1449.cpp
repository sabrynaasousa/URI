#include<bits/stdc++.h>

using namespace std;

map<string, string> dictionary;

int main(){
	int t, n, m;
	string japones, portugues, line;

	cin >> t;

	while(t--){
		cin >> m >> n;
		getchar();
		dictionary.clear();
		for(int i = 0; i < m; ++i){
			getline(cin, japones);
			getline(cin, portugues);

			dictionary[japones] = portugues;
		}

		for(int i = 0; i < n; ++i){
			getline(cin, line);
			istringstream is(line);
			string word;

			int cont = 0;
			while(is >> word){
				if(cont != 0){
					if( dictionary[word] != "")
						cout << " " << dictionary[word];
					else
						cout << " " << word;
				}
				else{
					if( dictionary[word] != "")
						cout << dictionary[word];
					else
						cout << word;
				}
				cont++;
			}
			cout << endl;
		}
		cout << endl;
	}
	
	
	return 0;
}

