#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
// YOU CAN DO IT !
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
const int MAX = 1000001;
void addChar(char a[][9]){
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
        }
    }
}

void solve (){
    char a[9][9];
    addChar(a);
    vt<int> check;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
           if (a[i][j] == 'R'){
            check.pb(i);
           }
        }
    }
    for (auto i : check){
        bool ok = true;
        for (int j = 0; j < 8; j++){
            if (a[i][j] != 'R'){
                ok = false;
                break;
            }
        }
        if (ok){cout << "R" << "\n"; return;}
    }
    cout << "B" << "\n";
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

// 11+4 = 15 
