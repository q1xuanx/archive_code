#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i,a) for (int i = a; i > 0; i--)
const int inf = 1e9;
void solve()
{
    string s; cin >> s;
    set<char> a;
    int k;
    bool check = true;
    for (k = 0; k < s.length(); k++){
        if (a.find(s[k]) == a.end()){
            a.insert(s[k]);
        }else {
            break;
        }
    }
    for (int i = k; i < s.length(); i++){
        if (s[i] != s[i-k]){
            check = false;
        }
    }
    cout << (check ? "YES\n" : "NO\n");
}
int main()
{
    fast;
    int t; cin >> t;
    while (t--)
    solve();
    return 0;
}

/*
TEST !
1000 1001 1002 1003 1004 1005 1006 1007 1008 1009

*/
