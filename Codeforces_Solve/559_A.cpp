#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n; cin >> n;
	string s;
	cin >> s;
	int tmp = 0;
	for (int i = 0; i < n; i++){
		if (s[i] == '+'){
			tmp += 1;
		}else if (s[i] == '-') {
			if (tmp == 0){
				tmp = 0;
			}else {
				tmp -= 1;
			}
		}
	}
	cout << tmp;
}	

int main(){
    fast;
	solve();
	return 0;
}
