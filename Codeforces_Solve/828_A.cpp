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
void solve (){
    int n; cin >> n;
    vt<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    string s; cin >> s;
    bool ok = true;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j] and s[i] != s[j]){
                ok = false;
                break;
            }
        }
    }
    if (ok) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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

