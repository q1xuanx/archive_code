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
const int inf = 1e9;
void solve()
{
   int a; cin >> a;
   if (a % 7 == 0){
        cout << a << "\n";
   }else {
        int ans = -1;
        for (int i = 0; i < 10; i++){
            if ((a - a % 10 + i) % 7 == 0){
                ans = a - a % 10 + i;
            }
        }
        cout << ans << "\n";
   }
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
/*
test



*/
