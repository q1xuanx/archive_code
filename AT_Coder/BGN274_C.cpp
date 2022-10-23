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
    int n; cin >> n;
    int temp[(2*n) + 1] = {};
    for (int i = 1; i <= n; i++){
        int j; cin >> j;
        temp[2*i] = temp[j] + 1;
        temp[2*i + 1] = temp[j] + 1;
    }
    for (int i = 1; i <= 2*n + 1; i++){
        cout << temp[i] << "\n";
    }
}
int main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    //cout << 2 / 2 << " ";
    return 0;
}

/*
1: amoeba = 1 
n records, ex n = 2
a[1] = 1
a[2] = 2
0
1 
1 
2 
2 
*/
