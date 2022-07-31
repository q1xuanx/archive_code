#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b; i++)
void solve (){
	string s1,s2,s3,s4;
	cin >> s1 >> s2 >> s3;
	s4 += s1 + s2;
	sort(s4.begin(),s4.end());
	sort(s3.begin(),s3.end());
	if (s3 == s4){
		cout << "YES";
	}else {
		cout << "NO";
	}
}
int main(){
	fast;
	solve();
	return 0;
}
// 2 3 5 7 11 
