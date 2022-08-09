#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	int des = 0;
	vector<int> tmp;
	for (int i = n - 1; i >= 0; i--){
		int x = min(a[i],n-i);
		des = max(des,x);
	}
	cout << des << "\n";
}	

int main(){
    fast;
	int t; cin >> t;
	while(t--)
		solve();
	return 0;
}
