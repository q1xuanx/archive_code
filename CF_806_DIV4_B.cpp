#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--){
		long long n, dem1 = 0, dem2 = 0;
		cin >> n;
		string s;
		cin >> s;
//		map <char,long long> mp;
//		for (int i = 0; i < n; i++){
//			cin >> s[i];
//			mp[s[i]]++;
//		}
//		for (int i = 0; i < n; i++){
//			if (mp[s[i]] > 1){
//				dem1 += mp[s[i]] + 1;
//				mp[s[i]] = 0;
//			}
//			if (mp[s[i]] == 1) {
//				dem2 += 2;
//				mp[s[i]] = 0;
//			}
//		}
		sort(s.begin(),s.end());
		for (int i = 0; i < s.length(); i++){
			if (s[i] != s[i + 1]){
				dem1++;
			}else {
				dem2++;
			}
		}
		cout << (2*dem1) + dem2 << endl;
	}
	return 0;
}
