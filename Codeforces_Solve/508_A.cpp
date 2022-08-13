#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
#define MAX 1000007
void solve (){
	int n,k, a[27], minn = MAX;
	memset(a,0,sizeof a);
	cin >> n >> k;
	char ch;
	rep(i,0,n){
		cin >> ch;
		int c = ch - 'A';
		a[c]++;
	}
	rep(i,0,k){
		minn = min(minn,a[i]);
	}
	cout << k * minn;
}	
int main(){
	fast;
	solve();
	//cout << (3*4)/6 + 1;
	return 0;
}

