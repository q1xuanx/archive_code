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
vt<string> a;
set<string> st;
set<string>::iterator itr;
void solve()
{  
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        a.pb(s);
        st.insert(s);
    }
    int cnt = 0, max = 0;
    string temp;
    for (itr = st.begin(); itr != st.end(); itr++){
        cnt = 0;
        for (int i = 0; i < a.size(); i++){
            if (*itr == a[i]){
                cnt++;
            }
        }
        if (cnt > max){
            max = cnt;
            temp = *itr;
        }
        // cout << *itr << " ";
    }
    cout << temp;
}
int main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}

/*
1 3 9 11 5 7
1 3 5 7 9 11


9 99 999

*/
