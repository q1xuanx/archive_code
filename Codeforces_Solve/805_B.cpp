#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
#define MAX 1000007
void solve()
{
	string s; cin >> s;
	int ans = 0;
	set<char> s1;
	for (int i = 0; i < s.length(); i++){
		s1.insert(s[i]);
		if (s1.size() > 3){
			ans++;
			s1.clear();
			s1.insert(s[i]);
		}
	}
	if (!s1.empty()) ans++;
	cout << ans << "\n";
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

*/
