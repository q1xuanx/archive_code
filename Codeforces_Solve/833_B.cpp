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
int n;
string s;
void solve()
{   
    cin >> n;
    cin >> s;
    ll ans = 0;
    for (int i = 0; i < n; i++){
        vt<int> t(11,0);
        int dc = 0, mx = 0;
        for (int j = i; j <= min(n-1,i+100); j++){
            if (t[s[j] - '0'] == 0){
                dc++;
            }
            t[s[j] - '0']++;
            mx = max(mx,t[s[j] - '0']);
            if (dc >= mx){
                ans++;
            }
        }
    }
    cout << ans << "\n";
    
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
789987887987998798
(5 + 7 + 6)
= 18 + (18 + 3)
*/
