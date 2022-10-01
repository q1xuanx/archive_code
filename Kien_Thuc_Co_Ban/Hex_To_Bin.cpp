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
const int inf = 1e9;
const int MAX = 1000001;
void solve (){
    int n; cin >> n;
    if (n == 0){
        cout << 0 << 0;
        return;
    }
    stack <int> a;
    while (n != 0){
        int temp = n % 16;
        a.push(temp);
        n /= 16;
    }
    if (a.size() == 1){
        cout << 0;
        if (a.top() > 9){
            cout << (char)((a.top() - 10) + 'A');
        }else {
            cout << a.top();
        }
        a.pop();
        return;
    }
    while (!a.empty()){
        if (a.top() > 9){
            cout << (char)((a.top() - 10) + 'A');
        }else {
            cout << a.top();
        }
        a.pop();
    }
}
int main()
{   
    fast;
    solve();
    return 0;
}
