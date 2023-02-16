#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i, a) for (int i = a; i > 0; i--)
#define pb push_back
#define vt vector
const int MX = 3e5 + 1;
// CODE HERE !
int m,s;
char ans[101];
void solve(){
	cin >> m >> s;
	if (s == 0){
		if (m == 1){
			cout << 0 << " " << 0;
		}else {
			cout << -1 << " " << -1;
		}
		return;
	}
	if (s > 9 * m){
		cout << -1 << " " << -1;
		return;
	}
	int t = s;
	for (int i = 0; i < m; i++){
		int t1 = t - 9 * (m - i - 1);
		if (t1 < 0) t1 = 0;
		if (t1 == 0 and i == 0) t1 = 1;
		t -= t1;
		cout << t1 << " ";
		ans[i] = t1 + '0';
	}
	ans[m] = 0;
	cout << ans << " ";
	t = s;
	for (int i = 0; i < m; i++){
		int t1 = t;
		if (t1 > 9) t1 = 9;
		t -= t1;
		ans[i] = t1 + '0';
	}
	cout << ans;
}

// Run Code 
int main()
{
	// freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);
	fast;
    ll test_case = 1;
	//cin >> test_case;
    while (test_case-->0)
    {
        solve();
	}
	return 0;
}
 
/*
-6 -2 0 4 35 #000000#000000
*/
