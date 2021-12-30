#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	if (n < 2) return 0;
	int k = sqrt(n);
	for (int i = 2; i <= k; i++){
		if( n % i == 0)
			return 0;
	}
	return 1;
}
void nhap(int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
int xuat(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if (nt(a[i] + a[i+1])){
			dem++;
		}
	}
	return dem;
}

int main(){
	int a[10000], n;
	nhap(a,n);
	cout << xuat(a,n) << endl;
	return 0;
}
