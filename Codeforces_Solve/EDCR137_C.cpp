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
int n;
string s;
void solve()
{  
    cin >> n;
    cin >> s;
    vt<int> a(n);
    rep(i,0,n) cin >> a[i];
    for (int i = 0, j = -1; i < n; i++){
        if (s[i] == '0'){
            j = i;
        }else if (j >= 0 and a[i] < a[j]){
            swap(s[i],s[j]);
            j = i;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '1'){
            ans += a[i];
        }
    }
    cout << ans << "\n";
    
}
int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
5
0  1 1 1 0
10 5 8 9 6
ans = 27?
10 8 9

6
0 1 2 3 4 5 6
0  1  1 0  1  1
20 10 9 30 20 19
s[i] == 0;
j = i;
j = 0;
10 20 9 
j = 3;
10 20 9 19 20
10 + 20 + 9 + 19 + 20
   30   39  58    78
*/
