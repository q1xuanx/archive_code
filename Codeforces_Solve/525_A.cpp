#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int x; cin >> x;
	if (x == 1){
		cout << -1;
	}else {
		cout << x - x % 2 << " " << 2;
	}
}	

int main(){
    fast;
	solve();
	return 0;
}
