#include <bits/stdc++.h>
#include<windows.h>
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
/*

*/
void solve()
{
    int n,i,j; cin >> n;
    int a[n], b[n];
    for (i = 1; i <= n; i++){ cin >> a[i]; b[i] = i;}
    if (n == 1){
        cout << -1 << "\n";
        return;
    }
    for (int i = 1; i <= n - 1; i++){
        if (a[i] == b[i]) swap(b[i],b[i+1]);
    }
    if (a[n] == b[n]) swap(b[n-1],b[n]);
    for (int i = 1; i <= n; i++) cout << b[i] << " ";
    cout << "\n";
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
1 3 9 11 5 7
1 4 13 24 29 36
*/
