#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (ll int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
ll int a[1000001];
void solve (){
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	cout << (a[n-1] - a[0]) + (a[n-2] - a[1]) << "\n";
}	
int main(){
	fast;
	int t; cin >> t;
	while (t--)
	solve();
	return 0;
}

/*
8
l = 7 | r = 8
1 2 2 3 1 5 6 1
1 2 3 4 5 6 7 8 
1 1 1 2 2 3 5 6
1 2 3 100 200
1 1 3 7 8 8
(8-1) + (8 - 1)
*/
