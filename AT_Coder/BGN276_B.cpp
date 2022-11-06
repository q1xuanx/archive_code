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
void solve()
{  
    cin >> n >> m;
    //vector<pair<int,int>> a;
    vector<int> a[n];
    for (int i = 1; i <= m; i++){
        int x,y; cin >> x >> y;
        a[x-1].pb(y);
        a[y-1].pb(x);
    }
    for (int i = 0; i < n; i++){
        sort(begin(a[i]),end(a[i]));
        cout << a[i].size() << " ";
        for (int x : a[i]){
            cout << x << " ";
        }   
        cout << "\n";
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
ascending order
6 6
3 6
1 3
5 6
2 5
1 2
1 6

*/
