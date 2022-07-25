#include <bits/stdc++.h>
#define for(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		if (n&1){
			cout << -1 << "\n";
		}else {
			int b,c;
			n /= 2;
			b = 1;
			c = n ^ b;
			cout << b << " " << b  << " "<< c << "\n";
		}
	}
	return 0;
}
