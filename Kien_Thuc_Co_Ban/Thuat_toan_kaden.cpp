#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[100];
	cin >> n;
	for (int i= 0; i < n; i++){
		cin >> a[i];
	}
	int sum1 = 0, sum2 = -1e18;
	for (int i = 0; i < n; i++){
		sum1 += a[i];
		if (sum1 > sum2){
			sum2 = sum1;
		}
		if (sum1 < 0){
			sum1 = 0;
		}
	}
	cout << sum2;
	return 0;
}
