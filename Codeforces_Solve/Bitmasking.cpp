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

void solve()
{   
    int n; cin >> n;
    int ans = 0;
    while (n){
        if (n & 1){
            ans++;
            //int temp = n & 1;
            //cout << temp << " ";
        }
        n >>= 1;
        //cout << n << "    ";
    }
    cout << ans;
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
    return 0;
}

/*
789987887987998798
(5 + 7 + 6)
= 18 + (18 + 3)
*/
