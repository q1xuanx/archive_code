#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
void solve (){
	int n; cin >> n;
	string s;
	cin >> s;
	bool flag = true;
	int c1 = 0,c2 = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == 'S' and s[i+1] == 'F'){
			c1++;
		}else if (s[i] == 'F' and s[i+1] == 'S'){
			c2++;
		}
	}
	cout << (c1 > c2 ? "YES" : "NO");
}
int main(){
    fast;
    solve();
//	int t = 1 << 10;
//	cout << t;
	return 0;
}
