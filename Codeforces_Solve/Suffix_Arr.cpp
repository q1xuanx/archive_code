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
void count_sort(vt<int> &p, vt<int> &c){
	int n = p.size();
	vt<int> cnt(n);
	for (auto x : c){
		cnt[x]++;
	}
	vt<int> p_n(n);
	vt<int> pos(n);
	pos[0] = 0;
	for (int i = 1; i < n; i++){
		pos[i] = pos[i - 1] + cnt[i - 1];
	}
	for (auto x : p){
		int i = c[x];
		p_n[pos[i]] = x;
		pos[i]++;
	}
	p = p_n;
}
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
		for (int i = 0; i < n; i++){
			p[i] = (p[i] - (1 << k) + n ) % n;
		}
		count_sort(p,c);
		vt<int> c_n(n);
		c[p[0]] = 0;
		for (int i = 1; i < n; i++){
			pair<int,int> prev = {c[p[i - 1]],c[(p[i - 1] + (1 << k)) % n]};
			pair<int,int> now = {c[p[i]],c[(p[i] + (1 << k)) % n]};
			if (now == prev){
				c_n[p[i]] = c_n[p[i-1]];
			}else {
				c_n[p[i]] = c_n[p[i-1]] + 1; 
			}
		}
		c = c_n;
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
-6 -2 0 4 35 #000000#000000
*/
