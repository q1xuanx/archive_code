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
ll k,p,a,n,x;
void solve()
{
    ll ans = 1;
    cin >> k;
    for (p = 2; (p * p) <= k; p++){
        a = 0;
        while (k % p == 0) k/=p, a++;
        n = 0;
        while (a > 0){
            n+= p;
            x = n;
            while (x % p == 0) x /= p, a--;
        }
        ans = max(ans,n);
    }
    ans = max(ans,k);
    cout << ans << "\n";

}
// Run Code
int main()
{
    fast;
    int test_case = 1;
    //cin >> test_case;
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
