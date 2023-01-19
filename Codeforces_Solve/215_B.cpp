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
#define MAX 101
const int N = 1000001;
// CODE HERE !
//int a[10001][10001];
int n,m;
int a[N], ret[N];
vt<int> b[N];
set<int> s;
void solve(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++){
		int x; cin >> x;
		b[x].pb(i);
	}
	s.clear();
	for (int i = n; i > 0; i--){
		s.insert(a[i]);
		for (int j = 0; j < b[i].size(); j++){
			ret[b[i][j]] = s.size();
		}
	}
	for (int i = 1; i <= m; i++){
		cout << ret[i] << "\n";
	}
}
	
// Run Code 
int main()
{
	// freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);
	fast;
    ll test_case = 1;
	//cin >> test_case;
    while (test_case-->0)
    {
        solve();
    }
	return 0;
}
 
/*
-6 -2 0 4 35 #000000#000000
*/
