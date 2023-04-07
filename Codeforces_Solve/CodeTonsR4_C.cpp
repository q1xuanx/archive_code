#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define vt vector
#define pb push_back
#define pf push_front
#define mp make_pair
const int modd = 100000007;
int lans[100005];
void solve(){
	int n,a,b; cin >> n >> a >> b;
	set<int> s;
	ll ans = 2e18, so = 0;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		if (s.find(x) == s.end()) s.insert(x);
		else so += a;
	}
	int c = 0;
	for (auto x : s) lans[++c] = x;
	for (int i = 1; i < c; i++){
		cout << lans[i] << " ";
	}
	for (int i = 1; i <= c; i++){
		ans = min(ans, 1LL *(lans[i] - i) * b + 1LL * (c - i) * a);
		
	}
	ans = min(ans,1LL*c*a+b);
	cout << (ll)(ans + so) << "\n";
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int tc = 1;	
	cin >> tc;
    while (tc--)
    {
		solve();
	}
	return 0;
}
 
/*
5
3 4 4 5 
3 0 4 0 5 

2 2 1 
0 2 0 1

0 3 4 4 3 
0 0 3 4 0 3
 0 3 4 4 3        
*/
