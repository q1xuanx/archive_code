#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	ll int n; cin >> n;
	if (n % 10 < 5){
		cout << n - (n % 10);
	}else {
		cout << n + (10 - n % 10);
	}
}	

int main(){
    fast;
	solve();
	//cout << 113 % 10;
	return 0;
}
