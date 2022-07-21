#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
const int MAX = 1e5+23;

void solve (){
	int x;
	cin >> x;
//	vector <int> d(3);
	int a,b,c;
	cin >> a >> b >> c;
	bool flag = true;
	int d = 0;
	while (x != 0){
		if (x == 1){
			x = a;
			d++;
		}
		if (x == 2){
			x = b;
			d++;
		}
		if (x == 3){
			x = c;
			d++;
		}
	}
	if (d == 3){
		cout << "YES\n";
	}else {
		cout << "NO\n";
	}
//	cout << (flag ? "YES\n" : "NO\n");
}
int main(){
	fast;
	int t; cin >> t;
	while(t--){
	solve();
	}	
	return 0;
}

