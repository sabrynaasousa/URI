#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	while( cin >> n and n ){
		for( int i = 0; i < n; ++ i ){
			for( int j = 0; j < n; ++j ){
				int x = min( i + 1, n - i );
				int y = min( j + 1, n - j );

				if( j )
					cout << ' ';

				cout << right << setw(3) << min( x, y );
			}
			cout << endl;
		}
		cout << endl;		
	}

	return 0;
}
