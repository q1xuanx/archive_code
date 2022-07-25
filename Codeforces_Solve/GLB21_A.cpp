#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int max = 0;
		int n,z;
		cin >> n >> z;
		vector <int> a(n);
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		for (int i = 0 ; i < n; i++){
			if ((a[i] | z) > max){
				max = (a[i] | z);
			}
		}
		cout << max << "\n";		
	}
	return 0;
}
