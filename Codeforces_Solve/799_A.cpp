#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (ll int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
ll int a[1000001];
void solve (){
	for (int i = 0; i < 4; i++){
		cin >> a[i];
	}
	int count = 0;
	for (int i = 1; i < 4; i++){
		if (a[i] > a[0]){
			count++;
		}
	}
	cout << count << "\n";
}	
int main(){
	fast;
	int t; cin >> t;
	while (t--)
	solve();
	return 0;
}

/*
3 3 
1 2 	
1 + 1 == 2 - 1
1 - 1 == 2 - 1
*/
