#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n, m; cin >> n >> m;

	vector <int> a(n), b(m),c;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (a[i] == b[j]){
				c.push_back(b[j]);
			}
		}
	}
	for (int i = 0; i < c.size(); i++){
		cout << c[i] << " ";
	}

}
int main(){
    fast;
	solve();
	return 0;
}
