#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
const int MAX = 1e5+23;

void solve (){
	int n;
	cin >> n;
	vector <int> a(n);
	int dem = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int d1 = 0,d2 = 0;
	for (int i = 0; i < n; i++){
		if (a[i] > 0){
			d1 += a[i];
		}
		if (d1 != 0){
			if (a[i] == -1){
				d1 += a[i];
			}
		}else {
			d2++;
		}
	}
	cout <<d2;
}
int main(){
	fast;
	solve();	
	return 0;
}

