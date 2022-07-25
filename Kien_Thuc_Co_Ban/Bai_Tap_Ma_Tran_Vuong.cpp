#include <iostream>
using namespace std;
#define MAX1 100
#define MAX2 100
void nhap (int a[][MAX2], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << "a["  << i <<"][" << j << "]";
			cin >> a[i][j];
		}
	}
}
void xuat (int a[][MAX2], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
void cacGiaTriNgoaiBien(int a[][MAX2], int dong, int cot){
	for(int i = 0; i < dong; i++){
		cout << a[i][0] << endl;
		cout << a[i][cot - 1] << endl;
	}
	for(int j = 1; j < cot - 1; j++){
		cout << a[0][j] << endl;
		cout << a[dong - 1][j] << endl;
	}
}
void duongcheochinh (int a[][MAX2], int dong, int cot){
	for(int i =0; i < dong; i++){
		cout << a[i][i] << " ";
	}
}
void duongcheophu(int a[][MAX2], int dong, int cot){
	for(int i = 0; i < dong; i++){
		cout << a[i][dong - 1 - i] << " ";
	}
}
void tongcacdong (int a[][MAX2], int dong, int cot){
	int tong;
	for(int i = 0; i < dong; i++){
		tong = 0;
		for(int j = 0; j < cot; j++){
			tong += a[i][j];
		}
		cout <<"\n";
		cout << "Tong dong " << i << " : " << tong;
	}
}
void tongcaccot (int a[][MAX2], int dong, int cot){
	int tong;
	for(int j = 0; j < cot; j++){
		tong = 0;
		for(int i = 0; i < dong; i++){
			tong += a[i][j];
		}
		cout <<"\n";
		cout << "Tong cot " << j << " : " << tong;
	}
}
int tinhdong (int a[][MAX2], int i, int dong){
	int tong = 0;
	for(int j = 0; j < dong; j++){
		tong += a[i][j];
	}
	return tong;
}
int dongnhat (int a[][MAX2], int dong, int cot){
	int d;
	int max = tinhdong(a,0,dong);
	for(int i = 1; i < dong; i++){
		int t = tinhdong(a,i,dong);
		if (max < t){
			max = t;
			d = i;
		}
	}
	return d;
}
int tinhcot (int a[][MAX2], int j, int cot){
	int tong = 0;
	for(int i = 0; i < cot; i++){
		tong += a[i][j];
	}
	return tong;
}
int cotnhat (int a[][MAX2], int dong, int cot){
	int d;
	int max = tinhcot(a,0,cot);
	for(int j = 1; j < cot; j++){
		int t = tinhcot(a,j,cot);
		if (max < t){
			max = t;
			d = j;
		}
	}
	return d;
}
int main(){
	int a[MAX1][MAX2], dong, cot;
	cout << "Nhap dong: ";
	cin >> dong;
	cout << "Nhap cot: ";
	cin >> cot;
	nhap(a,dong,cot);
	xuat(a,dong,cot);
	cacGiaTriNgoaiBien(a,dong,cot);
	duongcheochinh(a,dong,cot);
	duongcheophu(a,dong,cot);
	tongcacdong(a,dong,cot);
	tongcaccot(a,dong,cot);
	cout << "\n";
	cout << "Dong co gia tri lon nhat: " << dongnhat(a,dong,cot) << "\n";
	cout << "Cot co gia tri lon nhat: " << cotnhat(a,dong,cot);
	return 0;
}
