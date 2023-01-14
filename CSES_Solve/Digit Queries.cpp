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
void solve(){
	ll k; cin >> k;
	vt<ll> a(19,1);
	// 1 10 100 1000..
	for (int i = 1; i < 19; i++){
		a[i] = a[i-1] * 10;
	}
	ll length = 0, allnum = 0, sum = 0;
	for (int i = 1; i < 19; i++){
		sum += (a[i] - a[i-1]) * i;	
		if (sum >= k){
			length = i;
			break;
		}
		allnum = sum;
	}
	ll l = a[length - 1], r = a[length] - 1, ans = 0, posans = 0;
	while (l <= r){
		ll mid = (l + r) / 2;
		ll spos = (mid - a[length - 1]) * length + allnum + 1;
		if (spos <= k){
			if (mid > ans){
				ans = mid;
				posans = spos;
			}
			l = mid + 1;
		}else r = mid - 1;
	}
	string ss = to_string(ans);
	cout << ss[k - posans] << "\n";
}
// Run Code 
signed main()
 
{
	// freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);
	fast;
    ll test_case = 1;
	cin >> test_case;
    while (test_case--)
    {
        solve();
    }
	return 0;
}
 
/*
-6 -2 0 4 35 #000000#000000
*/
