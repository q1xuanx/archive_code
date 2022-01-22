#include <bits/stdc++.h>
using namespace std;
void taoMang(int a[][100], int &dong, int &cot){
	cout <<"Moi nhap so dong: ";
	cin >> dong;
	cout << "Moi nhap so cot: ";
	cin >> cot;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << "a[" << i << "]" << "[" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatMang (int a[][100], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << a[i][j] <<" ";
		}
		cout << "\n";
	}
}
int tinhDong (int a[][100] , int dong, int cot, int x){
	int tong;
	for(int i = 0; i < dong; i++){
		tong += a[x][i];
	}
	return tong;
}
int tinhCot (int a[][100] , int dong, int cot, int x){
	int tong;
	for(int i = 0; i < cot; i++){
		tong += a[i][x];
	}
	return tong;
}
int main (){
	int a[100][100];
	int dong ,cot ,x;
	taoMang(a,dong,cot);
	xuatMang(a,dong,cot);
	do{
		cout <<"Moi nhap dong can tinh: ";
		cin >> x;
		if (x > dong){
			cout << "\nMoi nha lai";
		}
	}while (x > dong);
	cout <<"\nTong dong can tinh la: " << tinhDong(a,dong,cot,x);
	do{
		cout <<"\nMoi nhap cot can tinh: ";
		cin >> x;
		if (x > cot){
			cout << "\nMoi nha lai";
		}
	}while (x > cot);
	cout <<"\nTong cot can tinh la: "  << tinhCot(a,dong,cot,x);
	return 0;
}
