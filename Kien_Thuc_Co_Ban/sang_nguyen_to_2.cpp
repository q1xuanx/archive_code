#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;

void solve (){
	int n = 0;
	cin >> n;
	vector<bool>mark(n+1,true);
	mark[0] = mark[1] = false;
	for (int i = 2; i*i <= n; i++){
		if (mark[i]){
			for (int j = i * i; j <= n; j+=i){
				mark[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++){
		if (mark[i]){
			cout << i << " ";
		}
	}
}	
int main(){
	fast;
	solve();	
	return 0;
}

