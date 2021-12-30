//****viet chuong trinh nhap vao mang chua n ptu cac so nguyen****// 
//n=8
//11  153  28  81 371  28  31 121
#include <iostream>
#include <math.h>
#define max 1000
using namespace std;
void nhapmang(int a[],int &n);
void xuatmang(int a[],int n);
int tinhtong(int a[], int n);
int kiemtrasonguyento(int n);
int demsonguyento(int a[],int n);
int kiemtrasochinhphuong(int n);
int demsochinhphuong(int a[], int n);
int sohoanhao(int n);
int demsohoanhao(int a[], int n);
int kiemtrasoamstrong(int n);
int demsoamstrong(int a[], int n);
int main(){
	int a[max], n;
	nhapmang(a,n);
	cout <<"Tong cac phan tu la: " << tinhtong(a,n) << endl;
	//xuatmang(a,n);
	cout <<"Co tat ca " << demsonguyento(a,n) <<" so nguyen to " << endl;
	cout <<"Co tat ca " << demsochinhphuong(a,n) <<" so chinh phuong " << endl;
	cout <<"Co tat ca " << demsohoanhao(a,n) <<" so hoan hao " << endl;
	cout <<"Co tat ca " << demsoamstrong(a,n) <<" so armstrong ";
	cout << endl;
	return 0;
}
void nhapmang(int a[],int &n){
	cout <<"Moi ban nhap vao n: ";
	cin >> n;
	for (int i = 0 ; i < n; i++){
		cin >> a[i];
	}
}
void xuatmang(int a[],int n){
	for(int i = 0 ; i < n ; i++){
		cout <<" "<< a[i];
	}
}
int tinhtong(int a[], int n){
	int s = 0;
	for (int i = 0 ; i < n; i++){
		s = s + a[i];
	}
	return s;
}
int kiemtrasonguyento(int n){
	if (n < 2) return 0;
	int k = sqrt(n);
	for (int i = 2; i <= k; i++){
		if( n % i == 0)
			return 0;
	}
	return 1;
}
int demsonguyento(int a[] , int n){
	int dem = 0;
	for (int i = 0; i < n; i++){
		if (kiemtrasonguyento(a[i]))
			dem++;
	}
	return dem;
}
int kiemtrasochinhphuong(int n){
	return sqrt(n) == int (sqrt(n));
}
int demsochinhphuong(int a[], int n){
	int dem = 0;
	for (int i = 0; i < n ; i++){
		if(kiemtrasochinhphuong(a[i])){
			dem++;
		}
	}
	return dem;
}
int sohoanhao(int n){
	int sum = 0;
	for ( int i = 1; i <= n/2; i++){
		if ( n % i == 0){
			sum = sum + i;
		}
	}
	if ( sum == n){
		return 1;
	}
	return 0;
}
int demsohoanhao(int a[], int n){
	int dem = 0;
	for (int i = 0 ; i < n; i++){
	 	if (sohoanhao(a[i])){
	 		dem++;
		 }
	}
	return dem++;
}
int kiemtrasoamstrong(int n){
	int dem = 0;
	int tam = n;
	while ( n > 0 ){
		n = n/10;
		dem++;
	}
	n = tam;
	int tong = 0;
	while (n > 0){
		tong = tong + pow(n % 10,dem);
		n = n /10;
	}
	n = tam;
	if (n == tong ){
		return 1;
	}else{
		return 0;
	}
}
int demsoamstrong(int a[], int n){
	int dem = 0;
	for (int i = 0 ; i < n; i++){
		if (kiemtrasoamstrong(a[i])){
			dem++;
		}
	}
	return dem;
}
