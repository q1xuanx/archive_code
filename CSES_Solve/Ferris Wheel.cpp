#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define debugg cout << "\nDebug...OK !\n"
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i, a) for (int i = a; i > 0; i--)
#define pb push_back
#define vt vector
#define MAX 101
// CODE HERE !
void solve()
{
	int n,m; cin >> n >> m;
	vt<int> a(n);
	rep(i,0,n) cin >> a[i];
	sort(a.begin(),a.end());
	int i = 0, j = n - 1, ans = 0;
	while (i < j){
		if (a[i] + a[j] <= m){
			ans++;
			a[i] = 0, a[j] = 0;
			i++;
			j--;
		}else if (a[i] + a[j] > m){
			j--;
		}
	}
	for (int i = 0; i < n - 1; i++){
		if (a[i] != 0 and a[i+1] != 0){
			if (a[i] + a[i+1] <= m) {
				ans++;
				a[i] = a[i+1] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++){
		if (a[i] != 0) ans++;
	}
	cout << ans;
}
// Run Code 
int main()
 
{
	// freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);
	fast;
    int test_case = 1;
	//cin >> test_case;
    while (test_case--)
    {
        solve();
    }
	return 0;
}
 
/*
-6 -2 0 4 35 #000000#000000
*/
