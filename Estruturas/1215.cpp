#include<bits/stdc++.h>

using namespace std;

set<string> lexicon;

int main(){
	string line;

	while(cin >> line){
		istringstream is(line);
		string word;

		while(is >> word){
			string aux = "";
			for(auto& s : word){
				s = tolower(s);
				if(isalpha(s))
					aux += s;
				else{
					if(aux != "")
						lexicon.insert(aux);
					aux = "";
				}
			}
			if(aux != "")
				lexicon.insert(aux);
		}
	}	

	for(auto& s : lexicon){
		cout << s << endl;
	}
}
