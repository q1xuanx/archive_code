#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repp(i, a, b) for (int i = a; i <= b; i++)
#define rever(i, a) for (int i = a - 1; i >= 0; i--)	
#define pb push_back
#define vt vector
#define mp make_pair
#define MAX 1e9+7
const ll MOD = 1e9 + 7;
// CODE HERE !
vt<int> adj[200005];
bool vis[200005];
int cnt;
void dfs (int u){
	cnt++;
	vis[u] = 1;
	for (auto i : adj[u]){
		if(!vis[i]){
			dfs(i);
		}
	}
}
void solve(){
	int n, l, r; cin >> n >> l >> r;
	for (int i = 0; i < n; i++){
		int u,v; cin >> u >> v;
		--u,--v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	int ans = 0;
	for (int i = 0; i < n; i++){
		if (!vis[i]){
		cnt = 0;
		dfs(i);
		if (cnt < l + r) ans ^= cnt / l;
		}
	}
	cout << (ans ? "Alice" : "Bob");
	cout << "\n";
}
int main(){
	fast;
	int tc = 1;
	//cin >> tc;
	while(tc--){
		solve();
	}
}
