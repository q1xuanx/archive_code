#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (ll int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
void solve (){
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	ll cnt1 = a * d, cnt2 = b * c;
	if (cnt1 == cnt2){
		cout << "0\n";
	}else {
		if ((cnt1 != 0 && cnt2 % cnt1 == 0) || (cnt2 != 0 && cnt1 % cnt2 == 0)){
			cout << "1" << "\n";
		}else {
			cout << "2" << "\n";
		}
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

/*
2 1 

*/
