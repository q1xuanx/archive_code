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
int a[100001];
void solve(){
	int n,k; cin >> n >> k;
	vt<int> a(n);
	rep(i,0,n) cin >> a[i];
	vt<int> cold(k+1), hot(k + 1), prof(k+1);
	for (int i = 1; i <= k; i++){
		cin >> cold[i];
	}
	for (int i = 1; i <= k; i++){
		cin >> hot[i];
		prof[i] = cold[i] - hot[i];
	}
	ll sum = 0;	 
	for (int i = 0; i < n; i++){
		sum += cold[a[i]];
	}
	ll max = 0, add = 0;
	vt<ll> dp(k + 1,-1e18);
	for (int i = 1; i < n; i++){
		ll val = std::max(max,dp[a[i]] + add + prof[a[i]]);
		//cout << val << " ";
		if (a[i] == a[i-1]){
			max += prof[a[i]];
			add += prof[a[i]];
		}
		dp[a[i-1]] = std::max(dp[a[i - 1]], val - add);
		//cout << dp[a[i-1]] << "\n";
		max = std::max(max,val);
	}
	ll ans = sum - max;
	cout << ans << "\n";
}
// Run Code 
int main()
{
	// freopen("speeding.in", "r", stdin);
	// freopen("speeding.out", "w", stdout);
	fast;
    long long test_case = 1;	
	cin >> test_case;
    while (test_case-->0)
    {
        solve();
	}
	return 0;
}
 
/*
-6 -2 0 4 35 #000000#000000
*/
