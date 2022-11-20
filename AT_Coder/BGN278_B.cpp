Misjudge the Time
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
int n, m;
void solve()
{   
    cin >> n >> m;
    int t1 = n, t2 = m;
    int a = 0, b = 0, c = 0, d = 0;
    a = n / 10;
    b = n % 10;
    c = m / 10;
    d = m % 10;
    swap(b,c);
    int h = (a*10) + b;
    int m = (c * 10) + d;
    //cout << h << " " << m;
    if ((h >= 0 and h <= 23) and (m >= 0 and m <= 59)){
        cout << t1 << " " << t2;
    }else if (h > 23 or m > 59){
        if (t1 >= 6 and t1 < 10){
            cout << 10 << " " << 0;
        }else if (t1 >= 16 and t1 < 20){
            cout << 20 << " " << 0;
        }else if (t1 == 20 and t2 >= 40){
            cout << 21 << " " << 0;
        }else if (t1 == 21 and t2 >= 40){
            cout << 22 << " " << 0;
        }else if (t1 == 22 and t2 >= 40){
            cout << 23 << " " << 0;
        }else if (t1 == 23 and t2 >= 40){
            cout << 0 << " " << 0;
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

*/
