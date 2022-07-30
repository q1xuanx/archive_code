#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
float a[1000];
void solve (){
	string s1,s2;
	cin >> s1 >> s2;
	vector <ll int> a;
	for (int i = 0; i < s1.length(); i++){
		if (s1[i] == '1' and s2[i] == '1'){
			a.push_back(0);
		}else if (s1[i] == '0' and s2[i] == '1') {
			a.push_back(1);
		}else if (s1[i] == '1' and s2[i] == '0'){
			a.push_back(1);
		}else {
			a.push_back(0);
		}
	}
	for (int i = 0; i < a.size(); i++){
		cout << a[i];
	}
}    
int main(){
    fast;
	solve();	
	return 0;
}
