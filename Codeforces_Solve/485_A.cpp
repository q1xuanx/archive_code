#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n,c = 0; cin >> n;
	vector <string> a(n);
	
	if (n == 0){
		cout << 6 << "\n";
		cout << "Time" << "\n" << "Mind" << "\n" << "Soul" << "\n" << "Power"  <<"\n" << "Reality" <<" \n" <<"Space";	
		return;
	}
	map <string,int> mp;
	mp["purple"] = 0;
	mp["green"] = 0;
	mp["blue"] = 0;
	mp["orange"] = 0;
	mp["yellow"] = 0;
	mp["red"] = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	cout << 6 - n << "\n";
	if (mp["blue"] == 0){
		cout << "Space" << "\n";
	}
	if (mp["green"] == 0){
		cout << "Time" << "\n";
	}
	if (mp["orange"] == 0){
		cout << "Soul" << "\n";
	}
	if (mp["purple"] == 0){
		cout << "Power" << "\n";
	}
	if (mp["red"] == 0){
		cout << "Reality" << "\n";
	}
	if (mp["yellow"] == 0){
		cout << "Mind" << "\n";
	}
	
}
int main(){
    fast;
   	solve();
	return 0;
}
