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
int n,r;
void solve()
{
    cin >> n;
    vt<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    int64_t ans = n / 2;
    for (int i = 0; i < n - 1; i++){
        if (a[i] < a[i+1]){
            ans = max(ans,int64_t(i+1)*(n-i-1));
        }
    }
    cout << ans << "\n";
}
// Run Code
int main()
{
    fast;
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    // cout << 0 % 2 << " ";
    return 0;
}

/*
test case
7
r 1
a 1
a 2
a 1
r 1
r 2
r 1
*/
