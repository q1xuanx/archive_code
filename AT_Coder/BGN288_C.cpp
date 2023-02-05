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
// CODE HERE !
void solve(){
	int n,m; cin >> n >> m;
	vt<vt<int>> a(1000001);
	for (int i = 0; i < m; i++){
		int u,v; cin >> u >> v;
		u--,v--;
		a[u].pb(v);
		a[v].pb(u);
	}
	int s = 0;
	vt<bool> used(n);
	for (int i = 0; i < n; i++){
		if (!used[i]){
			s++;
			used[i] = true;
			queue<int> q;
			q.push(i);
			while(!q.empty()){
				int u = q.front();
				q.pop();
				for (auto j : a[u]){
					if (!used[j]){
						used[j] = true;
						q.push(j);
					}
				}
			}
		}
	}
	cout << s;
	//cout << m - n + s;
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
