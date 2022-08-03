#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int a,b,c,d,k,x,y;
	cin >> a >> b >> c >> d >> k;	
	x = (a + c - 1)/c;
	y = (b + d - 1)/d;
	if (x + y <= k){
		cout << x << " " << y << "\n";
	}else {
		cout << -1 << "\n";
	}
}
int main(){
    fast;
    int t; cin >> t;
    while (t--){
   	solve();
   	}
	return 0;
}
