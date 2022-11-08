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
    cin >> n >> s;
    int maxsubstring = 1, max = 0, cnt1 = 0, cnt0 = 0;
    char temp = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == temp)
        {
            maxsubstring++;
        }
        else
        {
            if (maxsubstring > max)
            {
                max = maxsubstring;
            }
            temp = s[i];
            maxsubstring = 1;
        }
    }
    int ans = std::max(maxsubstring, max);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }
    ll ans1 = (ll)cnt0 * cnt1;
    cout << std::max(ans1,(ll)ans * ans) << "\n";
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
1000
cnt = 0
*/
