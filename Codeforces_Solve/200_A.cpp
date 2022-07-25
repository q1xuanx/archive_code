#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int d = 0;
	for (int i = 0; i < n; i++){
		if (a[i] != a[i+1]){
			d++;		
		}	
	}
	cout << d;
	return 0;
}
