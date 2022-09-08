#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i,a) for (int i = a; i > 0; i--)
const int inf = 1e9;

void solve()
{
    ll n,k; cin >> n >> k;
    vector<ll> a(n), b(n+1);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        b[i+1] = b[i] + a[i];
    }
    while (k--)
    {
        ll x, y;
        cin >> x >> y;
        cout << b[n-x+y] - b[n-x] << "\n";
    }
}
int main()
{
    fast;
    solve();
    return 0;
}

/*
TEST !
0 1 2 3 4
1 2 3 5 5 
*/
