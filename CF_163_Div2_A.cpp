#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n; cin >> n;
	vector<char> a(n);
	for (ll i = 0; i < n; i++){
		cin >> a[i];
	}
	int d = 0;
	for (ll i = 0; i < n; i++){
		if (a[i] == a[i+1]){
			d++;
		}
	}
	cout << d;
	return 0;
}
