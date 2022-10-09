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
    int n, m; cin >> n >> m;
    vt<vt<bool>> check(n,vt<bool>(n,false));
    for (int i = 0; i < m; i++){
        int k; cin >> k;
        vector<int> a(k);
        for (auto &v : a) cin >> v, v--;
        for (int j = 0; j < (int)a.size() - 1; j++){
            for (int z = j + 1; z < (int)a.size(); z++){
                check[a[j]][a[z]] = true;
            }
        }
    }   
    bool ans = 1;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            ans &= check[i][j];
        }
    }
    cout << (ans ? "Yes" : "No");
}

int main()
{
    fast;
    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
// 1 2 3 4 5 6
// a e i o u
