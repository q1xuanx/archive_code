#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i, a) for (int i = a; i > 0; i--)
const int inf = 1e9;
int a[1000001];
void solve (){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> b(n,0);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            b[((a[i] - 1 - i + j + n) % n)]++;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = max(ans,b[i]);
    }
    cout << ans;
}
int main()
{
    fast;
    int t = 1;
//    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
/*
test
0 1 2 3 
1 2 0 3


*/
