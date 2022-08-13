#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
void solve (){
	ll n; cin >> n;
	if ((n-2)%3){
		cout << "1 1 " << n-2;
	}else {
		cout << "1 2 " << n-3;
	}
}	
int main(){
	fast;
	solve();
	return 0;
}
