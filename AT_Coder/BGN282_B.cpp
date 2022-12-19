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

void solve()
{
	int n,m; cin >> n >> m;
	char a[n][m];
	int cnt = 0, check = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n-1; i++){
		int j = i + 1;
		check = 0;
		while (j < n){
			for (int k = 0; k < m; k++){
				if (a[i][k] != 'x' or a[j][k] != 'x'){
					check++;
				}
			}
			if (check == m) cnt++;
			check = 0;
			j++;
		}
	}
	cout << cnt;
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
