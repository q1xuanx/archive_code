#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
void solve (){
	int n,k; cin >> n >> k;
	int sum = 0;
	int a;
	for (int i = 1; i <= n; i++){
		cin >> a;
		sum += (i <= k and a > k);
	}
	cout << sum << "\n";
}	
int main(){
	fast;
	int t; cin >> t;
	while(t--)
	solve();
	return 0;
}
