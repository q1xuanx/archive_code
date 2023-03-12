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

void solve(){
	int h,w; cin >> h >> w;
	int a[11][11];
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++){
			cin >> a[i][j];
		}
	}
	int p[20], l = h+w-2, ans = 0;
	for (int i = 1; i <= l; i++){
		if (i > w - 1) {
			p[i] = 1;
		}else p[i] = 0;
	}
	do{
		int x = 1, y = 1;
		set<int> s; s.insert(a[1][1]);
		for (int i = 1; i <= l; i++){
			if (p[i]) y++;
			else x++;
			s.insert(a[x][y]);
		}
		if (s.size() == l + 1) ans++;
	}while (next_permutation(p+1,p+l+1));
	cout << ans << "\n";
}
// Run Code 
int main()
{
	// freopen("speeding.in", "r", stdin);
	// freopen("speeding.out", "w", stdout);
	fast;
    long long test_case = 1;	
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
