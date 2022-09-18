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
int checkC (char a[11][11]){
    int c = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (a[j][i] == '#')
            {
                c = i;
                return c;
            }
        }
    }
}
int checkT(char a[11][11])
{
    int t = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (a[i][j] == '#')
            {
                t = i;
                return t;
            }
        }
    }
}
void solve()
{
    char a[11][11];
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10; j++){
            cin >> a[i][j];
        }
    }
    int t = checkT(a), b = 0, c = checkC(a), d = 0, tmp = 0;
    //cout << t;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (a[i][j] == '#'){
                b = i;
            }
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (a[j][i] == '#'){
                d = i;
            }
        }
    }
    cout << t << " " << b << "\n";
    cout << c << " " << d;
}
int main()
{
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    // cout << 1122 % 1000 % 100 % 10;
    return 0;
}
/*
test



*/
