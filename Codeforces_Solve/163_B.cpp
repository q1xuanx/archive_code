#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
void solve (){
	int sec,a; cin >> a >> sec;
	string s; cin >> s;
	for (int i = 0; i < sec; i++){
		for (int j = 0; j < s.length()-1; j++){
			if (s[j] == 'B'){
				if (s[j+1] == 'G'){
					swap(s[j+1],s[j]);
					j++;
				}
			}
		}
	}
	cout << s;
}    
int main(){
    fast;
 	solve();
    return 0;
}

