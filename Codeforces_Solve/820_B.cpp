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
    int n; cin >> n;
    string s,s1; cin >> s;
    for (int i = n - 1; i >= 0;){
        if (s[i] == '0'){
            int x = (s[i-2] - '0') * 10 + s[i-1] - '0' - 1;
            s1 += 'a' + x;
            i -= 3;
        }else {
            s1 += 'a' + s[i] - '0' - 1;
            i -= 1;
        }
    }
    reverse(s1.begin(),s1.end());
    cout << s1 << "\n";
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
