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
int n,m;
string a,b;
void solve()
{  
    cin >> n >> m >> a >> b;
    if (a.substr(n - m + 1) == b.substr(1) and count(a.begin(),a.begin() + n - m + 1, b[0])) cout << "YES\n";
    else cout << "NO\n";
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

001001
01001
1001
101
11
*/
