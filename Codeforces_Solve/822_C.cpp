#include <bits/stdc++.h>
#include<windows.h>
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
const int MAX = 1000001;
/*

*/
void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    bool a[n+1];
    for (int i = 1; i <= n; i++) a[i] = (s[i-1] == '1');
    int pr[n+1];
    //n = 6
    // i = 6 5 4 3 2 1 
    // a[j] = i -> a[j] = 6
    for (int i = n; i >= 1; i--){
        for (int j = i; j <= n; j+=i){
            if (a[j]) break;
            pr[j] = i;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) if (!a[i]) ans += pr[i];
    cout << ans << "\n";
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        
    }
    return 0;
}
/*
test
1 2 3 4 5 6 7 
1 2   4     7
k = 3 ? 
*/
