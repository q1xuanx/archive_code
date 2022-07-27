#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;


void solve (){
	string s; cin >> s;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '-' and s[i+1] == '.'){
			cout << 1;
			i+=1;
		}
		else if (s[i] == '-' and s[i+1] == '-'){
			cout << 2;
			i+=1;
		}else {
			cout << 0;
		}
	}
}    
int main(){
    fast;
 	solve();
    return 0;
}

