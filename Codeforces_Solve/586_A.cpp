#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
void solve (){
	int n; cin >> n;
	string s;
	cin >> s;
	int c = 0, c1 = 0;
	sort(s.begin(),s.end());
	for (int i = 0; i < n; i++){
		if (s[i] == 'z'){
			cout << 0 <<" ";
		}else if (s[i] == 'n'){
			cout << 1 <<" ";
		}
	}
}
int main(){
    fast;
    solve();
//	int t = 1 << 10;
//	cout << t;
	return 0;
}
