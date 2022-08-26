#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (ll int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
int a[1000007];
void solve (){
	int n, ans = 0; cin >> n;
	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		int cnt = 0;
		reverse(s.begin(),s.end());
		for (int j = 0; j < 10; j++){
			if (s[j] == '1'){
				cnt ^= 1 << j;
			}
		}
		ans ^= cnt;
	}
	cout << __builtin_popcount(ans) << "\n";
}		
int main(){
	fast;
	int t; cin >> t;
	while (t--)
	solve();
	return 0;
}

/*
0 -> n
n - 1 round 


0100000100

0000000011
*/
