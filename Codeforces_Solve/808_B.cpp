#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
void solve()
{
    ll n,l,r; cin >> n >> l >> r;
    vector<ll> a;
    for (int i = 0; i < n; i++){
        ll x = r / (i + 1);
        x *= (i + 1);
        if (x < l){
            cout << "NO" << "\n";
            return;
        }
        a.push_back(x);
    }
    cout << "YES" << "\n";
    for (int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << "\n";
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
TEST !
1000 1001 1002 1003 1004 1005 1006 1007 1008 1009

*/
