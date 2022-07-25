#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
int gt (int n){
	int s = 1;
	for (int i = 1;i <= n; i++){
		s *= i;
	}
	return s;
}
int soCATALAN (int n){
	int gt1 = gt(2*n);
	int gt2 = gt(n+1)*gt(n);
	return gt1/gt2;
}
int main(){
  fast;
	int n;
	cin >> n;
	cout << "So catalan: " << soCATALAN(n);
	return 0;
}

// 1 2 3 4 5 6
// 1 2 5 14 42 132
