#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	ll int n; cin >> n;
	if (n == 2 || n == 3){
		cout << "NO SOLUTION";
		return;
	}else {
		int value = 2;
		while (value <= n){
			cout << value << " ";
			value += 2;
		}
		value = 1;
		while (value <= n){
			cout << value << " ";
			value += 2;
		}
	}
}
int main(){
    fast;
	solve();
	return 0;
}
