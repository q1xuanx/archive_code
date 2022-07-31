#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b; i++)
int isPrime (int n){
	for (int i = 2; i * i <= n; i++){
		if (n % i == 0) 
			return 0;
	}
	return n > 1;
}
void solve (){
	int a,b; cin >> a >> b;
	bool flag = true;
	vector <ll> c;
	for (int i = 2; i <= 50; i++){
		if (isPrime(i)){
			c.push_back(i);
		}
	}
	for (int i = 0; i < c.size(); i++){
		if (a == c[i] and b != c[i+1]){
			flag = false;
		}
	}
	cout << (flag ? "YES" : "NO");
}
int main(){
	fast;
	solve();
	return 0;
}
// 2 3 5 7 11 
