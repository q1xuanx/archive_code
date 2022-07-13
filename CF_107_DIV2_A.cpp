#include <bits/stdc++.h>
using namespace std;
long long sol (long long n){
	while (n){
		long long tmp = n % 10;
		if (tmp != 4 && tmp != 7){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
void solv(){
	int n,k,l,c,d,p,nl,np,t1,t2,t3,min = 100000,a[3];
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	t1 = (k*l)/nl;
	t2 = c*d;
	t3 = p/np;
	a[0] = t1;
	a[1] = t2;
	a[2] = t3;
	for (int i = 0; i < 3; i++){
		if (a[i] < min){
			min = a[i];
		}
	}
	cout << min/n;
}
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	solv();
	return 0;
}
