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
#define pub push_back
#define vt vector
const int inf = 1e9;
const int MAX = 30;
// CODE HERE !
void solve()
{
    int n; cin >> n;
    vt <int> a;
    for (int i = 0; i < n; i++){
        char x;
        int b;
        cin >> x >> b;
        if (x == 'r'){
            int cnt = 0;
            for (int i = 0; i < a.size(); i++){
                if (a[i] == b){
                    a.erase(a.begin() + i);
                    cnt++;
                    break;
                }
            }
            if (cnt == 0) cout << "Wrong !" << "\n";
            else if (a.size() == 0){
                cout << "Wrong !\n";
            }else if (cnt != 0 and a.size() != 0){
                sort(a.begin(),a.end());
                if (a.size() % 2 == 0)
                {
                    cout << (a[a.size() / 2] + a[(a.size() / 2) - 1]) / (float)2 << "\n";
                }
                else
                {
                    cout << (a[a.size() / 2]) << "\n";
                }
            }
        }else {
            a.push_back(b);
            sort(a.begin(),a.end());
            if (a.size() % 2 == 0){
                cout << (a[a.size()/2] + a[(a.size()/2) - 1])/(float)2 << "\n";
            }else {
                cout << (a[a.size()/2]) << "\n";
            }
        }
    }
}
// Run Code
int main()
{
    fast;
    int test_case = 1;
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    // cout << 0 % 2 << " ";
    return 0;
}

/*
***
***
***
7
r 1
a 1
a 2
a 1
r 1
r 2
r 1
*/
