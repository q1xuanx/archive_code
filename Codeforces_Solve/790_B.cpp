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
    int n; cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum - (*min_element(a.begin(),a.end()) * n) << "\n";
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
TEST RESULT !
0 = off
1 = on
000
001

*/
