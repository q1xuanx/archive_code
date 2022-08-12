#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n; cin >> n;
	vector<int> a;
	a.push_back(1);
	a.push_back(1);
	int temp = 0;
	for (int i = 2; i < 16; i++){
		temp = a[i-2] + a[i-1];
		a.push_back(temp);
	}
	vector<int>::iterator itr;
	for (int i = 1; i <= n; i++){
		int f = i;
		itr = find(a.begin(),a.end(),f);
		if (itr != a.end()){
			cout << "O";
		}else {
			cout << "o";
		}
	}
}	
int main(){
	fast;
	solve();
	return 0;
}
