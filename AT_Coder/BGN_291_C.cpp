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
void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int x = 0, y = 0;
	map<pair<int,int>,int> m;
	m[make_pair(x,y)] = 1;
	for (int i = 0; i < n; i++){
		if (s[i] == 'R'){
			x += 1;
			m[make_pair(x,y)]++;
		}else if (s[i] == 'L'){
			x -= 1;
			m[make_pair(x,y)]++;
		}else if (s[i] == 'U'){
			y += 1;
			m[make_pair(x,y)]++;
		}else {
			y -= 1;
			m[make_pair(x,y)]++;
		}
		if (m[make_pair(x,y)] == 2) {cout << "Yes\n"; return;}
	}
	cout << "No";
}
// Run Code 
int main()
{
	// freopen("speeding.in", "r", stdin);
	// freopen("speeding.out", "w", stdout);
	fast;
    long long test_case = 1;	
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
