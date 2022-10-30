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
// CODE
int t[4001];
void solve()
{  
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    t[0] = 1;
    for (int i = 0; i + a <= n; i++){
        if (t[i] != 0){
            t[i+a] = t[i] + 1;
        }
    }
    for (int i = 0; i + b <= n; i++){
        if (t[i] != 0){
            t[i+b] = max(t[i+b],t[i] + 1);
        }
    }
    for (int i = 0; i + c <= n; i++)
    {
        if (t[i] != 0)
        {
            t[i + c] = max(t[i + c], t[i] + 1);
        }
    }
    cout << t[n] - 1;
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
n = 6 
m = 2 
a = 1 
b = 2
*/
