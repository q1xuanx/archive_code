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
int q;
void solve()
{
	cin >> n;
	vt<ll> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	vt<ll> prefix(n+1,0);
	for (int i = 1; i < n + 1; i++){
		prefix[i] = a[i-1] + prefix[i-1];
	}
	cin >> q;
	for (int i = 0; i < q; i++){
		int s,e;
		cin >> s >> e;
		s--;
		cout << prefix[e] - prefix[s] << "\n";
	}
}

// Run Code
int main()
{
    fast;
    int test_case = 1;
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    // cout << 0 % 2 << " ";
    return 0;
}

/*
Time Complex: O(1)
*/
