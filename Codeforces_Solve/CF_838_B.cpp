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
const int inf = 1e9;
#define MAX 100
// CODE HERE !
ll n;
ll ans (ll x){
	ll cur = 1;
	while (cur <= x){
		cur *= 2;
	}
	return cur;
}
void solve()
{
	cin >> n;
	cout << n << "\n";
	for (int i = 1; i <= n; i++){
		ll x; cin >> x;
		cout << i << " " << ans(x) - x << "\n";
	}
}
// Run Code
int main()
{
    fast;
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
    {
        solve();
        //cout << "On" << " ";
    }
    return 0;
}

/*
 
*/
