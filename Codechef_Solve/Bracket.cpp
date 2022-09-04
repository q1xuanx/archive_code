#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
void solve(){
    string s; cin >> s;
    int cnt = 0,max = -1;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '('){
            cnt++;
        }
        if (s[i] == ')'){
            cnt--;
        }
        if (cnt > max){
            max = cnt;
        }
    }
    for (int i = 0; i < max; i++){
        cout << "(";
    }
    for (int i = 0; i < max; i++)
    {
        cout << ")";
    }
    cout << "\n";
}
int main(){
    fast;
    int t; cin >> t;
    while (t--)
    solve();
    return 0;
}

/*
TEST RESULT !
0 = off
1 = on
000
001

*/
