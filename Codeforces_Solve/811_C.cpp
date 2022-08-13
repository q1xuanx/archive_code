#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
void solve (){
	int n; cin >> n;
	string res;
	for (int i = 9; i >= 1; i--){
		if (n >= i){
			res = (char)('0'+ i) + res;
			n-= i;
		}
	}
	cout << res << "\n";
}	
int main(){
	fast;
	int t; cin >> t;
	while(t--)
	solve();
	return 0;
}

