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
const int inf = 1e9;
const int MAX = 30;
// CODE HERE !
ll l, r;
ll bs_sqrt(ll x){
    ll cnt = 0;
    for (int i = 0; i <= 2; i++){
        ll s = 0;
        ll e = 1.1e9;
        while (s + 1 < e){
            ll m = (s + e) / 2;
            if (m * (m + i) <= x){
                s = m;
            }else {
                e = m;
            }
        }
        cnt += s;
    }
    return cnt; 
}
void solve()
{
    cin >> l >> r;
    cout << bs_sqrt(r) - bs_sqrt(l-1) << "\n";
}
int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

/*
1000
cnt = 0
7,9,7,9,15,53

*/
