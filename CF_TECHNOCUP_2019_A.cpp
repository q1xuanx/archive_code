#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int n; cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	int d = 0;
	for (int i = 0; i < n; i++){
		if (v[i] == 1){
			d++;
		}
	}
	if (d != 0){
		cout << "HARD";
	}else {
		cout << "EASY";
	}
	return 0;
}
