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
int n,q;
ll a[100001];
void solve()
{
    cin >> n >> q;
    ll x[] = {0,0};
    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        x[a[i] % 2]++;
    }
    for (int i = 0; i < q; i++){
        int t,z; cin >> t >> z;
        int k = x[t];
        x[t] = 0;
        x[(z % 2) != t] += k;
        sum += k * z;
        cout << sum << "\n";
    }
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
