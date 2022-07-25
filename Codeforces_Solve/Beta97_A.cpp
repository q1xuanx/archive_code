#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,p; cin >> n;
	vector <int> a(n);
	for (int i = 1; i < n+1; i++){
		cin >> p;
		a[p-1] = i;
	}
	for (int i = 0; i < n; i++){
		cout << a[i] << " "; 
	}
	return 0;
}
// 2 3 4 1 
// 4 1 2 3 
