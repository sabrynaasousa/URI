#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
	if(b == 0)
		return a;
	else
		return mdc(b, a%b);
}

int main(){
	int n, n1, n2, d1, d2, min, a , b;
	char s;
	cin >> n;	

	while(n--){
		scanf("%d / %d %c %d / %d", &n1, &d1, &s, &n2, &d2);
		if(s == '+'){
			a = (n1*d2 + n2*d1);
			b = (d1*d2);
			cout << a << "/" << b << " = ";
			min = mdc(a, b);
			cout << a/min << "/" << b/min << endl;
		}
		else if(s == '-'){
			a = (n1*d2 - n2*d1);
			b = (d1*d2);
			cout << a << "/" << b << " = ";
			min = mdc(abs(a), abs(b));
			cout << a/min << "/" << b/min << endl;
		}
		else if(s == '*'){
			a = (n1*n2);
			b = (d1*d2);
			cout << a << "/" << b << " = ";
			min = mdc(a, b);
			cout << a/min << "/" << b/min << endl;
		}
		else{
			a = (n1*d2);
			b = (d1*n2);
			cout << a << "/" << b << " = ";
			min = mdc(a, b);
			cout << a/min << "/" << b/min << endl;
		}	
	}
}	
