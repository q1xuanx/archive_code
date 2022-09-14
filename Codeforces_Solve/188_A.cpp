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
const int inf = 1e9;
void solve()
{
    ll int n,k; cin >> n >> k;
    if (n % 2 == 0){
        if (n/2 >= k) cout << (2 * k) -1;
        else cout << (k - n/2) * 2;
    }else {
        if (k <= n/2 + 1) cout << 2 * k - 1;
        else cout << (k - n/2 - 1) * 2;
    }
}
int main()
{
    fast;
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
test



*/
