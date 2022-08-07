#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n, c = 0 ; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	cout << a[(n-1)/2];
}

int main(){
    fast;
	solve();
	return 0;
}
