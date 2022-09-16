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
    int n, m;
    cin >> n;
    int a[n];
    int sum = 0;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        c[i] = sum;
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << lower_bound(c, c + n, b[i]) - c + 1 << "\n";
    }
}
int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    // cout << 1122 % 1000 % 100 % 10;
    return 0;
}
/*
test



*/
