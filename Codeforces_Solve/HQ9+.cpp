#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b; i++)
void solve (){
	string s; cin >> s;
	bool flag = false;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			flag = true;
			break;
		}
	}
	cout << (flag ? "YES" : "NO");
}
int main(){
	fast;
	solve();
	return 0;
}
// 2 3 5 7 11 
