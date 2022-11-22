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
int checkPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return n > 1;
}
// string idx = {"abcdefghijklmnopqrstuvwxyz"};
ll n;
void solve()
{
    cin >> n;
    vt<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int i,j, res = 0;
    for (i = j = 0; i < n; i =j){
        while (j < n and a[j] == a[i]){
            j++;
        }
        res += (i == 0 || a[i] < a[i-1]) and (j == n || a[j] > a[j-1]);
    }
    if (res == 1) cout << "YES\n";
    else cout << "NO\n";
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
    return 0;
}

/*

*/
