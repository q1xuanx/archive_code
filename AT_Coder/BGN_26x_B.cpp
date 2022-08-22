#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (ll int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
int a[10000001];
int bonus[10000001];
void solve (){
	ll int n,m,t;
	cin >> n >> m >> t;
	for (ll int i = 1; i <= n-1; i++){
		cin >> a[i];
	}
	for (ll int i = 0; i < m; i++){
		ll int x,y;
		cin >> x >> y;
		bonus[x] = y;
	}
	for (int i = 1; i <= n - 1; i++){
		if (t <= a[i]){
			cout << "No";
			return;
		}
		t -= a[i];
		t += bonus[i+1];
	}
	cout << "Yes";
}	
int main(){
	fast;
	solve();
	//cout << 100 / 3;
	return 0;
}
