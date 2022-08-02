#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
void solve (){
	int n,m;
	cin >> n >> m;
	string s;
	cin >> s;
	for (int j = 0; j < m; j++){
		int x,z; cin >> x >> z;
		char A,B; cin >> A >> B;
		for (int i = x-1; i < z; i++){
			if (s[i] == A){
				s[i] = B;
			}
		}
	}
	cout << s;
}
int main(){
    fast;
    solve();
//	int t = 1 << 10;
//	cout << t;
	return 0;
}
