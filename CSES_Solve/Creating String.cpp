#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	string s; cin >> s;
	int count = 0;
	sort(s.begin(),s.end());
	do{
		count++;
	}while(next_permutation(s.begin(),s.end()));
	cout << count << "\n";
	do{
		cout << s << "\n";
	}while(next_permutation(s.begin(),s.end()));
}
int main(){
    fast;
	solve();
	return 0;
}
