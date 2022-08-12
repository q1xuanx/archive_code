#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
void solve (){
	char a[27], b[27];
	for (int i = 0; i < 26; i++){
		cin >> a[i];
	}
	for (int i = 0; i < 26; i++){
		cin >> b[i];
	}
	string s, str = "";
	cin >> s;
	bool isUp = false;
	for (int i = 0; i < s.size(); i++){
		if (isdigit(s[i])){
			str += s[i];
		}else {
			if (isupper(s[i])){
				isUp = true;
				s[i] = tolower(s[i]);
			}
			for (int j = 0; j < 26; j++){
				if (s[i] == a[j]){
					if (isUp){
						str += toupper(b[j]);
						isUp = false;
						break;
					}else {
						str += b[j];
						break;
					}
				}
			}
		}
	}
	cout << str;
}	
int main(){
	fast;
	solve();
	return 0;
}
