#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	ll int n,m; cin >> n >> m;
	vector<int> a(n),b(m);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	int ans = 0;
	int c1 = 0, c2 = 0, k1 = 0, k2 = 0;
	for (int i = 0; i < n; i++){
		if (a[i] % 2 == 0){
			c1++;
		}else {
			c2++;
		}
	}
	for (int i = 0; i < m; i++){
		if (b[i] % 2 == 0){
			k1++;
		}else {
			k2++;
		}
	}
	ans = min(c1,k2) + min(c2,k1);
	cout << ans;
}	

int main(){
	fast;
	solve();
	return 0;
}
