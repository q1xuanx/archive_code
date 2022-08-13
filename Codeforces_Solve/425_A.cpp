#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
void solve (){
	ll n,k; cin >> n >> k;
	if ((n/k) % 2 != 0){
		cout << "YES";
	}else {
		cout << "NO";
	}
}	
int main(){
	fast;
	solve();
	return 0;
}

