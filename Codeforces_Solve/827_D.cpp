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
vt<int> check[1001];
void solve (){ 
    int n; cin >> n;
    vt<int> id[1001];
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        id[x].push_back(i);
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++){
        for (int j : check[i]){
            if (!id[i].empty() and !id[j].empty()){
                ans = max(ans,id[i].back() + id[j].back());
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    fast;
    for (int i = 1; i <= 1000; i++){
        for (int j = 1; j <= 1000; j++){
            if(__gcd(i,j) == 1){
                check[i].push_back(j);
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

