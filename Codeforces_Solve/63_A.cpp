#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;


void solve (){
	ll n,sum1 = 0,sum2= 0,sum3 = 0;
	cin >> n;
	vector <ll> x(n);
	vector <ll> y(n);
	vector <ll> z(n);
	for (int i = 0; i < n; i++){
		cin >> x[i] >> y[i] >> z[i];
		sum1 += x[i];
		sum2 += y[i];
		sum3 += z[i];
	}
	cout << (sum1 == 0  and sum2 == 0 and sum3 == 0 ? "YES" : "NO");
}    
int main(){
    fast;
 	solve();
    return 0;
}

