#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector <int> a(n);
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort (a.begin(),a.end());
		if(n % 2 != 0){
			int mid = n/2;
			cout << a[mid] << endl;
		}else {
			int mid = (n/2)-1;
			int tmp = 0;
			for (int i = 0; i < mid; i++){
				tmp = tmp ^ a[i];
				tmp = tmp ^ a[n-1-i];
			}
			tmp = tmp ^ a[mid+1];
			if(tmp == a[mid]){
				cout << a[mid] << "\n";
			}else {
				cout << a[mid+1] << "\n";
			}
		}
	}
//	int t = 4 ^ 5 ;
//	cout << t;
	return 0;
}

input
4
4
4 3 2 5
5
6 1 10 7 10
6
6 6 6 6 6 6
3
100 100 0
output
3
7
6
0
