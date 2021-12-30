#include <iostream>
#define maxx 1000
using namespace std;
void nhap(int a[], int &n);
void xuat(int a[] ,int n);
void them(int a[], int &n, int so, int vitri);
void xoa(int a[], int &n, int so);
int main(){
	int a[maxx], n, so,vitri;
	nhap(a,n);
	them(a,n,so,vitri);
	cout <<"\nMang sau khi da them 1 phan tu la: ";
	xuat(a,n);
	xoa(a,n,so);
	cout <<"\nMang sau khi da xoa 1 phan tu la: ";
	xuat(a,n);
	return 0;
}
void nhap(int a[], int &n){
	cout <<"Moi nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout <<" " <<a[i];
	}
}
void them(int a[], int &n, int so, int vitri){
	cout <<"Nhap so can them: ";
	cin >> so;
	cout <<"Nhap vi tri can chen: ";
	cin >> vitri;
	if(vitri >= 0 && vitri <= n){
		for(int i = n; i > vitri; i--){
			a[i] = a[i - 1]; // dich phan tu sang phai 1 vi tri
		}
		a[vitri] = so; // them so vao vi tri 
		n++; //tang phan tu len 1
	}else{
		cout <<"Nhap sai moi nhap lai";
	}
	
}
int timso(int a[], int n, int so){
	for (int i = 0; i < n; i++){
		if(a[i] == so){
			return i; //tim thay x tai i
		}
	}
	return -1;	// khong tim thay
}
void xoa(int a[], int &n, int so){
	cout <<"\nNhap so can xoa: ";
	cin >> so;
	int vitri = timso(a,n,so);
	if(vitri == -1){
		cout <<"Khong tim thay!";
	}else{
		for (int i = vitri; i <= n-2; i++){
			a[i] = a[i+1]; // dich can phan tu sang trai 1 vi tri
		}
		n--; // giam bot 1 phan tu
	}
}
