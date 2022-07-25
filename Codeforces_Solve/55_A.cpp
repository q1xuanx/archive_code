#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	string s;
	cin >> s;
	int d1 = 0, d2 = 0;
	for (int i = 0; i < s.length(); i++){
		if (  s[i] >= 65 && s[i] <= 90){
			d1++;
		}
	}
	for (int i = 0; i < s.length(); i++){
		if ( s[i] >= 97 && s[i] <= 122){
			d2++;
		}
	}
	if (d1 > d2){
		for (int i = 0; i < s.length(); i++){
			if (s[i] >= 97 && s[i] <= 122){
				s[i] -= 32;
			}
		}
	}else {
		for (int i = 0; i < s.length(); i++){
			if (s[i] >= 65 && s[i] <= 90){
				s[i] += 32;
			}
		}
	}
	cout << s;
	return 0;
}
