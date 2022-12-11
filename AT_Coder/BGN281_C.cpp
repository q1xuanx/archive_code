#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define debugg cout << "\nDebug...OK !\n"
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i, a) for (int i = a; i > 0; i--)
#define pb push_back
#define vt vector
const int inf = 1e9;
#define MAX 100
// CODE HERE !
void solve()
{
    int n;
    //vt<int> a(n);
    cin >> n; 
    ll t;
    cin >> t;
    vt<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    const ll rem = t % accumulate(begin(a),end(a),0LL);
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (sum + a[i] > rem){
            cout << i + 1 << " " << rem - sum;
            return;
        }
        sum += a[i];
    }
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
    return 0;
}

/*
180 240 120
t = 600 
180 + 240 = 420
*/
