#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[100],b[100];
	int n = 10;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << "MANG A" << "\n";
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
	cout << "MANG B" << "\n";
	int nb = 0;
	for (int i = 0; i < n; i++){
		if (i == n-1){
			b[nb] = a[i-1];
		}
		else if (i == 0){
			b[nb] = a[i+1];
		}else {
			b[nb] = a[i+1] + a[i-1];
		}
		nb++;
	}
	for (int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	return 0;
}
