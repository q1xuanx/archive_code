#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int n,a,b,c,d;
	cin >> n;
	while (1){
		n++;
		a = n /1000;
		b = (n%1000)/100;
		c = (n%1000%100)/10;
		d = n%1000%100%10;
		if ((a != b and a != c and a != d and b != c and b != d and c != d)){
			cout << a << b << c << d;
			break;
		}	
	}
	return 0;
}
