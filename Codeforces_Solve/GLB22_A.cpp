#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
// YOU CAN DO IT !
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
const int MAX = 1000001;

void solve()
{
    int n;
    scanf("%d", &n);
    vt<int> a(n);
    vt<int> b(n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    vt<vt<ll>> v(2);
    for (int i = 0; i < n; i++)
    {
        v[a[i]].pb(b[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    auto go = [&]()
    {
        ll res = 0;
        if (v[0].size() == v[1].size())
        {
            res -= min(v[0].front(), v[1].front());
            // cout << v[0].front();
        }
        while (!v[0].empty() && !v[1].empty())
        {
            res += (v[0].back() + v[1].back()) * 2;
            v[0].pop_back();
            v[1].pop_back();
        }
        for (auto x : v[0])
            res += x;
        for (auto x : v[1])
            res += x;
        return res;
    };
    printf("%lld\n", go());
}

int main()
{
    fast;
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        solve();
    }
    return 0;
}
// 1 2 3 4 5 6
// a e i o u
