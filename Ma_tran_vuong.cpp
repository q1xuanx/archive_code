#include <bits/stdc++.h>
using namespace std;
void taoMang(int a[][100], int &n){
	cout <<"Moi nhap so dong va cot: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
}
void xuatMang(int a[][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << "\t";
		}
		cout << "\n";
	}
}
void duongCheoChinh(int a[][100], int n){
	for(int i = 0; i < n; i++){
		cout << a[i][i] << "\t";
	}
}
void duongCheoPhu(int a[][100], int n){
	for(int i = 0; i < n; i++){
		cout << a[i][n-1-i] << "\t"; 
	}
}
int kiemTraDoiXung (int a[][100], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if (a[i][j] != a[j][i]){
				return 0;
			}
		}
	}
	return 1;
}
int tinhTongTrenDuongCheoChinh(int a[][100], int n){
	int tong = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			tong += a[i][j];
		}
	}
	return tong;
}
int tinhTongDuoiDuongCheoChinh(int a[][100], int n){
	int tong = 0;
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			tong += a[i][j];
		}
	}
	return tong;
}
int main(){
	int n;
	int a[100][100];
	taoMang(a,n);
	xuatMang(a,n);
	duongCheoChinh(a,n);
	duongCheoPhu(a,n);
	if(kiemTraDoiXung == 0){
		cout << "\nMa tran khong doi xung";
	}else {
		cout <<"\nMa tran doi xung";
	}
	cout << "\nTong cac phan tu tren duong cheo chinh: " << tinhTongTrenDuongCheoChinh(a,n);
	cout << "\nTong cac phan tu duoi duong cheo chinh: " << tinhTongDuoiDuongCheoChinh(a,n);
	return 0;
}
