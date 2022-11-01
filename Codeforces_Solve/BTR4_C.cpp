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
vt<string> a,b;

void solve()
{  
    int n; cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        cin >> s;
        if (mp.count(s) == 0){
            cout << "OK" << "\n";
            mp[s] = 1;
        }else {
            cout << s << mp[s] << "\n";
            mp[s]+=1;
        }
    }

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
6
0    1      2     3      4     5
   first second second third third
f    f      s     s      t     t
OK 
first1
OK
*/
