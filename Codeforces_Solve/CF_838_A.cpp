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
int n;
int a[1001];
void solve()
{
	cin >> n;
	rep(i,0,n){
		cin >> a[i];
	}
	int sum = accumulate(a,a+n,0);	
	if (sum % 2 == 0){
		cout << 0 << "\n";
		return;
	}
	sum = 0;
	int ans = inf;
	for (int i = 0; i < n; i++){
		int cnt = 1;
		int temp = a[i];
		while (1){
			if ((temp + temp/2)%2 == 1) break;
			else temp/=2; cnt++;
		}
		ans = (ans < cnt ? ans : cnt);
	}
	cout << ans << "\n";
}
// Run Code
int main()
{
    fast;
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
    {
        solve();
        //cout << "On" << " ";
    }
    return 0;
}

/*
 
*/
