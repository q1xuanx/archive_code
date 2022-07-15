#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--){
	int n,k,dem=0; 
	cin >> n >> k;
	vector <int> a(2*n);
	for (int i = 0; i < 2*n; i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	bool flag = true;
	for(int i = 0; i < n; i++){
		if (a[n+i] - a[i] < k){
			flag = false;
		}
	}
	cout << (flag? "YES\n" : "NO\n");
}
	return 0;
}
