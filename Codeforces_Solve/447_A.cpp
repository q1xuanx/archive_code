#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
void solve (){
	int count = 0;
	string s;
	cin >> s;
	for (int i = 0; i  < s.length()-1; i++){
		for (int j = i + 1; j < s.length()-1; j++){
			for (int z = j + 1; z < s.length(); z++){
				if (s[i] == 'Q' and s[j] == 'A' and s[z] == 'Q')
					count++;
			}
		}
	}
	cout << count;
}	
int main(){
	fast;
	solve();
	return 0;
}
