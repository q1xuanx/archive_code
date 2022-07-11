#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int n, a[1000], b[1000], d = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i != j and a[i] == b[j]){
				d++;
			}
		}
	}
	cout << d;
	return 0;
}
