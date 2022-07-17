#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
const int MAX = 1e5+23;
int read(){
	char k = getchar(); ll x = 0;
	while(k < '0' || k > '9') k = getchar();
	while(k >= '0' && k <= '9') x = x * 10 + k - '0' ,k = getchar();
	return x;
}
int n, a[MAX];
void solve (){
	n = read();
	for (int i = 1; i <= n; i++){
		a[i] = read();
	}
	bool ok = true;
	for (int i = 1; i <= n; i++){
		if (a[i] % a[1]){
			ok = false;
		}
	}
	puts(ok ? "YES" : "NO");
}
int main(){
	fast;
	int t; cin >> t;
	while(t--){
		solve();
	}	
	return 0;
}

