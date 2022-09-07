#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    set<int> s;
    int ans = mp.size();
    for (int i = n - 1; i >= 0; i--){
        if (i != n - 1 and a[i+1] < a[i]) break;
        mp[a[i]]--;
        if (mp[a[i]] == 0){
            mp.erase(a[i]);
            s.erase(a[i]);
        }else {
            s.insert(a[i]);
        }
        if (s.size() == 0){
            ans = min(ans,(int)mp.size());
        }
    }
    cout << ans << "\n";
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*
TEST !
1000 1001 1002 1003 1004 1005 1006 1007 1008 1009

*/
