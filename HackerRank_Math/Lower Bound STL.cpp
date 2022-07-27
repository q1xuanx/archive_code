#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
void solve (){
	int n,m; cin >> n;
	vector <int> a(n);
	vector <int>::iterator itr;
	for (int i = 0; i < n;i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	cin >> m;
	for (int i = 0; i < m; i++){
		int x; cin >> x;
		itr = lower_bound(a.begin(),a.end(),x);
		if (x == *itr){
			cout << "Yes " << (itr-a.begin())+1 <<endl;
		}else {
			cout << "No " << (itr-a.begin()) + 1 << endl;
		}
	}
}    
int main(){
    fast;
 	solve();
    return 0;
}

