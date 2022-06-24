#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[100];
	int p,q;
	cin >> p;
	for (int i = 0; i < p; i++){
		cin >> a[i];
	}
	cin >> q;
	for (int i = p; i < p + q; i++){
		cin >> a[i];
	}
	sort(a,a+(p+q));
	for (int i = 0; i < p + q; i++){
		cout << a[i] << " ";
	}
	return 0;
}
