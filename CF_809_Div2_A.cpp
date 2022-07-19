#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
void solve(){
	int n,m;
	cin >> n >> m;
	string s(m,'B');
	while(n--){
		int x; cin >> x;
		x--;
		x = min(x,m-1-x);
		if (s[x] == 'B'){
			s[x] = 'A';
		}else {
			s[m-1-x] = 'A';
		}
	}
	cout << s;
//4 5
//1 1 3 1
//1 5
//2
//4 1
//1 1 1 1
//2 4
//1 3
//2 7
//7 5
//4 5
//5 5 3 5
	cout << "\n";
}
int main(){
	fast;
	int t; cin >> t;
	while (t--){
	solve();
	}
	return 0;
}

