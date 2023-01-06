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
const int inf = 5e3 + 5;
#define MAX 100003
// CODE HERE !
string s;
int suff[MAX];
void solve()
{
	cin >> s;
	s += '$';
	int n = s.length();
	vt<int> p(n),c(n);{
		vt<pair<char,int>> a(n);
		for (int i = 0; i < n; i++) a[i] = {s[i],i};
		sort(a.begin(),a.end());
		for (int i = 0; i < n; i++) p[i] = a[i].second;
		c[p[0]] = 0;
		for (int i = 1; i < n; i++){
			if (a[i].first == a[i-1].first){
				c[p[i]] = c[p[i-1]];
			}else {
				c[p[i]] = c[p[i-1]] + 1; 
			}
		}
	}
	int k = 0;
	while ((1 << k) < n){
		vt<pair<pair<int,int>,int>> a(n);
		for (int i = 0; i < n; i++){
			a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
		}
		sort(a.begin(),a.end());
		for (int i = 0; i < n; i++) p[i] = a[i].second;
		c[p[0]] = 0;
		for (int i = 1; i < n; i++){
			if (a[i].first == a[i-1].first){
				c[p[i]] = c[p[i-1]];
			}else {
				c[p[i]] = c[p[i-1]] + 1; 
			}
		}
		k++;
	}
	for (int i = 0; i < n; i++){
		cout << p[i] << " ";
	}
}
// Run Code 
int main()
{
	// freopen("word.in", "r", stdin);
	// freopen("word.out", "w", stdout);
	fast;
    int test_case = 1;
	//cin >> test_case;
    while (test_case--)
    {
        solve();
    }
	return 0;
}

/*
Examples
input
ababba
output
6 5 0 2 4 1 3 
input
aaaa
output
4 3 2 1 0 
input
ppppplppp
output
9 5 8 4 7 3 6 2 1 0 
input
nn
output
2 1 0 

*/
