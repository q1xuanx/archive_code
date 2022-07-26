#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
void solve (){
	int b,a; cin >> b >> a;
	if ((2*a)%b==0){
		cout << (2*a)/b;
	}else {
		cout << ((2*a)/b)+1;
	}
}	
int main(){
	fast;

	solve();
	return 0;
}

