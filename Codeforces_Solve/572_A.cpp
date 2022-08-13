#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
void solve (){
	int n; cin >> n;
	int c = 0;
	string s; cin >> s;
	for (int i = 0 ;i < s.length(); i++){
		if (s[i] == '0'){
			c++;
		}else {
			c--;
		}
	}
	if (c != 0){
		cout << 1 << "\n";
		cout << s;
	}else {
		cout << 2 << "\n";
		cout << s[0];
		cout << " ";
		for (int i = 1; i < n; i++){
			cout << s[i];
		}
	}
}	
int main(){
	fast;
	solve();
	return 0;
}

