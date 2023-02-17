#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define debugg cout << "\nDebug...OK !\n"
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i, a) for (int i = a; i > 0; i--)
#define pb push_back
#define vt vector
const int inf = 1e9;
#define MAX 100
// CODE HERE !
int n,a,b;
void solve()
{
    cin >> n >> a >> b;
	if (n == 1){
		if (a == b){
			cout << 1 << "\n";
			cout << a << ":" << b;
			return;
		}else {
			cout << 0 << "\n";
			cout << a << ":" << b;
			return;
		}
	}
    if (n - (a + b) > 0) cout << n - (a+b) << "\n";
	else cout << 0 << "\n";
	if (a == 0 and b != 0){
		for (int i = 0; i < n - 1; i++){
			if (b > 0) {
				cout << 0 << ":" << 1 << "\n";
				b--;
			}else {
				cout << 0 << ":" << 0 << "\n";
			}
		}
		cout << 0 << ":" << b << "\n";
		return;
	}else if (a != 0 and b == 0){
		for (int i = 0; i < n - 1; i++){
			if (a > 0){
				cout << 1 << ":" << 0 << "\n";
				a--;
			}else {
				cout << 0 << ":" << 0 << "\n";
			}
		}
		cout << a << ":" << 0 << "\n";
		return;
	}
	if (a + b == n){
		for(int i = 0; i < n; i++){
			if (a > 0){
				cout << 1 << ":" << 0 << "\n";
				a--;
			}else if (b > 0){
				cout << 0 << ":" << 1 << "\n";
			}else if (a == 0 and b == 0){
				cout << 0 << ":" << 0 << "\n";
			}
		}
	}
	else if (n - (a + b) < 0){
		for (int i = 0; i < n - 2; i++){
			if (a > 0){
				cout << 1 << ":" << 0 << "\n";
				a--;
			}else if (b > 0){
				cout << 0 << ":" << 1 << "\n";
				b--;
			}else if (a == 0 and b == 0){
				cout << 0 << ":" << 0 << "\n";
			}
		}
		if (a == 0 and b != 0){
			int t = b;
			cout << 0 << ":" << b - 1 << "\n";
			cout << 0 << ":" << t - (b - 1)  << "\n";
			return;
		}
		cout << a << ":" << 0 << "\n";
		cout << 0 << ":" << b << "\n";
	}else if (a + b < n){
		for (int i = 0; i < n; i++){
			if (a > 0) {
				cout << 1 << ":" << 0 << "\n";
				a--;
			}else if (b > 0){
				cout << 0 << ":" << 1 << "\n";
				b--;
			}else {
				cout << 0 << ":" << 0 << "\n";
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
-6 -2 0 4 35 
*/
