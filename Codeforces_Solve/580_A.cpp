#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n; cin >> n;
	int a[100001];
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m; cin >> m;
	int b[100001];
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a,a+n,greater<int>());
	sort(b,b+m,greater<int>());
	cout << a[0] << " " << b[0];
}	

int main(){
    fast;
	solve();
	return 0;
}
