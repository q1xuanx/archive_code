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
int n;
//int a[100001];
void solve()
{  
    cin >> n;
    vt<int> a(n);
    rep(i,0,n){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int ans = a[n-1] - a[0];
    for (int i = 0; i < n - 1; i++){
        ans = max({ans,a[i+1] + a[n-1] - 2 * a[i],2 * a[i+1] - a[i] - a[0]});
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
n = 6
m = 2
a = 1
b = 2
5 5 4 2 2 2 4 5 5 3 5 5 5 1
5 1 5 4
 4   1
5
1 1 1 5 1 1 1 4 5 5 5 1 1 1
5 1 1 4
 4   3
17 8 19 45
45 8 45 19
 37   26
5 5 4 2 2 2 4 5 5 3 5 5 5 1
5 1 5 4 
 4    1
*/
