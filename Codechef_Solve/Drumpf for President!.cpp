#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (ll int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
int a[1000007];
int b[1000007];
void solve (){
	int n,k; cin >> n >> k;
	fill(b,b+n,0);
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		a[i] = x - 1;
		++b[a[i]];
	}
	int cnt = 0;
	for (int i = 0;i < n; i++){
		if (b[i] >= k and a[i] != i){
			cnt++;
		}	
	}
	cout << cnt << "\n";
	// for (int i = 0; i < n; i++){
	// 	cout << b[i] << " ";
	// }
}			
int main(){
	fast;
	int t; cin >> t;
	while (t--)
	solve();
	return 0;
}

/*
0 -> n
n - 1 round 


0100000100

0000000011
*/
