#include <iostream>

using namespace std;

void nhap (int a[], int n){
	if (n == 0){
		return;
	}
	cin >> a[n-1];
	nhap(a,n-1);
}
void xuat (int a[], int n){
	if (n == 0){
		return;
	}
	cout << a[n-1] << " ";
	xuat(a,n-1);
}

int tinhTong (int a[], int n){
	if (n < 0){
		return 0;
	}
	int tong = tinhTong(a,n-1);
	tong += a[n-1];
	return tong; 
}
int tongChan(int a[], int n){
	if (n < 0){
		return 0;
	}
	int tong = tongChan(a,n-1);
	if (a[n] % 2 == 0){
		tong += a[n];
	}else {
		tongChan(a,n-1);
	}
	return tong;
}
int demDuong (int a[], int n){
	if (n < 0){
		return 0;
	}
	int dem = 0;
	if (a[n] > 0){
		return 1 + demDuong(a,n-1);
	}else {
		return demDuong(a,n-1);
	}
}

int timPhanTuLonNhat(int a[], int n){
	if (n < 0){
		return 0;
	}
	int max = timPhanTuLonNhat(a,n-1);
	if (a[n] > max){
		max = a[n];
	}
	return max;
}
int timPhanTuNhoNhat(int a[], int n){
	if (n == 0){
		return a[0];
	}
	int min = timPhanTuNhoNhat(a,n-1);
	if (a[n-1] < min){
		return a[n-1];
	}else {
		return min;
	}
}
int chanCuoi (int a[], int n){
	if (n < 0){
		return 0;
	}
	if (a[n-1] % 2 == 0){
		return a[n-1];
	}else {
		chanCuoi(a,n-1);
	}
}
int timViTri (int a[], int n, int x){
   if (n == 0){
		return -1;
   } 
   if (a[n-1] == x){
   		return n-1;
   }else{
   		timViTri(a,n-1,x);
   }
}
int main(){
	int a[100], n, index;
	cout << "Nhap phan tu cua mang: ";
	cin >> n;
	nhap(a,n);
	xuat(a,n);
	cout << "\n";
	cout << "Tong phan tu cua mang: " << tinhTong(a,n) << "\n";
	cout << "Tong phan tu chan cua mang: " << tongChan(a,n) << "\n";
	cout << "Co tat ca " << demDuong(a,n) << " phan tu duong " << "\n";
	cout << "Phan tu lon nhat: " << timPhanTuLonNhat(a,n) << "\n";
	cout << "Phan tu nho nhat: " << timPhanTuNhoNhat(a,n) << "\n";
	cout << "Phan tu chan cuoi: " << chanCuoi(a,n) << "\n";
	int x;
	cout << "Nhap so can tim: ";
	cin >> x;
	cout << "Vi tri cuoi cung cua " << x  << " la: " << timViTri(a,n,x);
	return 0;
}
