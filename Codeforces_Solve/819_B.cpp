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
    int n, m;
    cin >> n >> m;
    if (n == 1){
        cout << "YES" << "\n";
        cout << m << "\n";
        return;
    }
    if (m < n || (m % 2 != 0 and n % 2 == 0))
    {
        cout << "NO" << "\n";
    }
    else
    {
        if (n % 2 == 0)
        {
            int sum1 = 0;
            cout << "YES"  << "\n";
            for (int i = 0; i < n - 2; i++)
            {
                cout << 1 << " ";
                sum1++;
            }
            cout << (m - sum1) / 2 << " " << (m - sum1) / 2 << "\n";
        }
        else
        {
            cout << "YES" << "\n";
            int sum2 = 0;
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1 << " ";
                sum2++;
            }
            cout << m - sum2;
            cout << "\n";
        }
    }
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
