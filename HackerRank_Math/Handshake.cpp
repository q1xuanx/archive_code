#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
void solve (){
	int n;
	cin >> n;
	if (n == 1){
		cout << 0 <<endl;
		return;
	}
	cout << (n-1)*n/2 << endl;
}	
int main(){
	fast;
	int t; cin >> t;
	while(t--)
	solve();
	return 0;
}

