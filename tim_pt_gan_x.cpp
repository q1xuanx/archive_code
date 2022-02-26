#include <bits/stdc++.h>

using namespace std;

void taoMang (int a[], int &n){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
int phanTuGanX (int a[], int n, int x){
	int viTri = 0;
	int temp;
	int khoangCach = abs(a[0] - x); // khoang cach dau tien 
	for (int i = 0; i < n; i++){
		temp = abs(a[i] - x); // tim khoang cach cua mang
		if (khoangCach > temp){
			khoangCach = temp;
			viTri = i;
		}
	}
	return a[viTri];
}
int main (){
	int n, a[100], x;
	taoMang(a,n);
	cin >> x;
	cout << "Phan tu gan voi phan tu x la: " << phanTuGanX(a,n,x);
}
