#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
#define MAX 1000007
void solve()
{
	int n, m, sx, sy, t, d;
	cin >> n >> m >> sx >> sy >> d;
	if (min(sx - 1, m - sy) <= d and min(n - sx, sy - 1) <= d){
		cout << -1 << "\n";
	}else {
		cout << n + m - 2 << "\n";
	}
}
int main()
{
	fast;
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}

/*
r  b
b  r
*/
