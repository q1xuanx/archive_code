#include <bits/stdc++.h>
#define for(i,n) for (int i = 0; i < n; i++)
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m,a[n][m];
		cin >> n >> m;
		for(i,n){
			for(j,m){
				int t1 = i /2, t2 = j /2;
				int a1 = (t1+t2) & 1;
				int a2 = ((i & 1) + (j & 1) & 1);
				cout << (a1^a2)<< " ";
			}
			cout << "\n";
		}
	}

	return 0;
}
