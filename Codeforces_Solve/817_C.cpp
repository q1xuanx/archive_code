#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
#define MAX 1000007
void solve()
{
	int n; cin >> n;
	map<string,int> mp;
	string a[3][n];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
			mp[a[i][j]]++;
		}
	}
	int res = 0;
	for (int i = 0; i < 3; i++){
		res = 0;
		for (int j = 0; j < n; j++){
			if (mp[a[i][j]] == 1) res += 3;
			else if (mp[a[i][j]] == 2) res += 1;
		}
		cout << res << " ";
	}
	cout << "\n";
}
int main()
{
	fast;
	int t; cin >> t;
	while (t--)
	solve();
	return 0;
}

/*
L = a b c d
=> b c d a
	0 1 2
S = a b c;
=> R = c s[1] = b -> a s[2] = c -> b
	   0

	1 1 3 2		
	   5 5 1 3 2
*/
