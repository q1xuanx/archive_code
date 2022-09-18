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
const int MAX = 1000001;
bool prime[MAX];
void solve()
{
    int i, j;
    prime[0] = prime[1] = true;
    for (i = 4; i < MAX; i+=2) prime[i] = true;
    for (i = 3; i * i <= MAX; i+= 2)
        if (!prime[i]){
            for (j = i * i; j < MAX; j+= 2 * i){
                prime[j] = true;
            }
        }
}
int main()
{
    fast;
    solve();
    ll r, n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        r = sqrt(n);
        if (!prime[r] and r * r == n){
            cout << "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
    }
    // cout << 1122 % 1000 % 100 % 10;
    return 0;
}
/*
test



*/
