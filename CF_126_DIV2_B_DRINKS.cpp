#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector <int> a(n);
	long long sum = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];		
	}
	for (int i = 0; i < n; i++){
		sum += a[i];		
	}
	double pi = (double) sum/n;
	cout << setprecision(12) << fixed << pi;
	return 0;
}
