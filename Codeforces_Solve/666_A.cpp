#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (ll int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
void solve (){
	int n; cin >> n;
	map <char,int> mp;
	vector<char> a;
	for (int i = 0; i < n; i++){
		char s[10001]; cin >> s;
		for (int i = 0; i < strlen(s); i++){
			a.push_back(s[i]);
		}
	}
	for (int i = 0; i < a.size(); i++){
		mp[a[i]]++;
	}
	bool ans = true;
	for (int i = 0; i < a.size(); i++){
		if (mp[a[i]] % n != 0){
			ans = false;
		}
	}
	cout << (ans ? "YES\n" : "NO\n");
}			
int main(){
	fast;
	int t; cin >> t;
	while (t--)
	solve();
	return 0;
}

/*
r  b
b  r
*/
