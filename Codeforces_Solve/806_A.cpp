#include <bits/stdc++.h>
using namespace std;
void solve (){
	int dem = 0;
	string s;
	cin >> s;
	if (s[0] == 89 || s[0] == 121){
		dem++;
	}
	if (s[1] == 69 || s[1] == 101){
		dem++;
	}
	if (s[2] == 83 || s[2] == 115){
		dem++;
	}
	if (dem == 3){
		cout << "YES" << "\n";
	}else {
		cout << "NO" << "\n";
	}
}
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int t; cin >> t;
	while (t--){
		solve();	
	}
	return 0;
}
