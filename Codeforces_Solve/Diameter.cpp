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
// CODE HERE !
int diameter[300001];
int bfs (int init, vt <int> a[], int n){
	queue<int> q;
	q.push(init);
	int visted[n+1];
	for (int i = 0; i <= n; i++){
		visted[i] = 0;
		diameter[i] = 0;
	}
	q.push(init);
	visted[init] = 1;
	while (!q.empty()){
		int u = q.front();
		q.pop();
		for (int i = 0; i < a[u].size(); i++){
			if (visted[a[u][i]] == 0){
				visted[a[u][i]] = 1;
				diameter[a[u][i]] += diameter[u] + 1;
				q.push(a[u][i]);
			}
		}
	}
	return int(max_element(diameter + 1, diameter + n + 1) - diameter);
}
int find(vt<int> a[], int n){
	int init = bfs(1,a,n);
	int val = bfs(init,a,n);
	return diameter[val];
}
void solve(){
	int n; cin >> n;
	vt<int> a[n + 1];
	for (int i = 1; i < n; i++){
		int x,y; cin >> x >> y;
		a[x].pb(y);
		a[y].pb(x);
	}
	cout << find(a,n) * 3;
}
	
// Run Code 
int main()
 
{
	// freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);
	fast;
    ll test_case = 1;
	//cin >> test_case;
    while (test_case--)
    {
        solve();
    }
	return 0;
}
 
/*
-6 -2 0 4 35 #000000#000000
*/
