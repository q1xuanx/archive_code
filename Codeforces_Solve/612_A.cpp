#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n; cin >> n;
	string s; cin >> s;
	int k = -1;
	int ans;
	for (int i = 0; i < n; i++){
		if (s[i] == 'P' and k > -1){
			ans = max(ans,i-k);
		}else if (s[i] == 'A'){
			k = i;
		}
	}
	cout << ans << "\n";
}	

int main(){
    fast;
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
