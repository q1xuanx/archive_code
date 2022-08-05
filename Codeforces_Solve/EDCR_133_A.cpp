#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	ll int n,tmp = 0; cin >> n;
	ll int i = 0;
	if (n == 1) cout << 2 << "\n";
	else if (n % 3 != 0){
		cout << n / 3 + 1 << "\n";
	}else {
		cout << n / 3 << "\n";
	}
}
int main(){
    fast;
 	int t; cin >> t;
   	while(t--){
	   solve();
	}
	return 0;
}
