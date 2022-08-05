#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	ll int n,c = 0,tmp = 0; cin >> n;
	vector<ll int> a(n);
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	if (n == 1){
		cout << 0;
		return;
	}
	for (int i = 1; i < n; i++){
		if (a[i] < a[i-1]){
			c += a[i-1] - a[i];
			a[i] = a[i-1];
		}
	}
	cout << c;	
}
int main(){
    fast;
	solve();
	return 0;
}
