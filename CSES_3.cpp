#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
void solve (){
	string s; cin >> s;
	char tmp;
	int max = 0,c=0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] != tmp){
			tmp = s[i];
			c=0;
		}
		if (s[i] == tmp){
			c++;
		}
		if (c > max){
			max = c;
		}
	}
	cout << max;
}	
int main(){
	fast;
	solve();	
	return 0;
}

