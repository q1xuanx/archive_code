#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i, a) for (int i = a; i > 0; i--)
const int inf = 1e9;
void solve (){
    int n; cin >> n;
    string s; cin >> s;
    vector<ll> a;
    ll tot = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == 'L'){
            a.push_back((n-1-i)-i);
            tot+= i;
        }else {
            a.push_back(i - (n - 1 - i));
            tot += n - 1 - i;
        }
    }
    sort(a.begin(),a.end(),greater<int>());
    for (int i = 0; i < n; i++){
        if (a[i] > 0) tot += a[i];
        cout << tot << " ";
    }
    cout << "\n";
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    
    return 0;
}
/*
test
1 3
n = 1 -> a[1] = 1;

*/
