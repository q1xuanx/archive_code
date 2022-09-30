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
const int inf = 1e9;
const int MAX = 1000001;
/*

*/
void solve()
{   
    int n; cin >> n;
    int d[n], a[n];
    for (int i = 0; i < n; i++) cin >> d[i];
    a[0] = d[0];
    for (int i = 1; i < n; i++){
        if (d[i] and a[i-1] - d[i] >= 0){
            cout << -1 << "\n";
            return;
        }else {
            a[i] = abs(d[i] + a[i - 1]);
        }
    }
    rep(i,0,n){
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
/*
test
1 0 2 5 
a[1] = d[1] + a[i-1]
a[1-1] = - d[i] - a[i]
2 6 3 
2 a[1] = 8
2 8 5 
2 6 3 
a[0] = 2
a[1] = 8                 i = 2     
d[i] = a[i] - a[i-1] => a[i-1] = D[2] - A[2]
*/
