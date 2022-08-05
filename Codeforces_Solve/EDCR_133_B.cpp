#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
void solve (){
	int n; cin >> n;
	cout << n << '\n';
	vector <int> a;
	for (int i = 0; i < n; i++){
		a.push_back(i + 1);
		cout << i + 1 << " ";
	}
	cout << '\n';
	int i = 0, j = n-1;
	while (i < j){
		swap(a[i],a[j]);
		i++;
		for (int z = 0; z < n; z++){
			cout << a[z] << " ";
		}
		cout << "\n";
	}
	
}
int main(){
    fast;
 	int t; cin >> t;
   	while(t--){
	   solve();
	}
	return 0;
}
