#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, string>;

map<int, string> words;

int main(){
	int n;
	string line;

	cin >> n;
	getchar();

	while(n--){
		words.clear();
		getline(cin, line);
		istringstream is(line);	
		string word;
	
		while(is >> word){
			int tam = word.size();
			if(words[tam] == "")
				words[tam] = word;
			else{
				words[tam] += " ";
				words[tam] += word;
			}
		}

		for(auto it = words.rbegin(); it != words.rend(); it++){
			if(it != words.rbegin())
				cout << " ";	
			cout << it->second;
		}
		cout << endl;
	}	
	return 0;
}


