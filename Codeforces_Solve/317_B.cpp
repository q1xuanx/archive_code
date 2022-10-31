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

void solve()
{  
    cin >> n;
    vt<int> a(n);
    rep(i,0,n) cin >> a[i];
    sort(a.begin(),a.end());
    cin >> q;
    for (int i = 0; i < q; i++){
        int t; cin >> t;
        int ans = upper_bound(a.begin(),a.end(),t) - a.begin();
        cout << ans << "\n"; 
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
    
    return 0;
}

/*
1 3 9 11 5 7
1 3 5 7 9 11


9 99 999

*/
