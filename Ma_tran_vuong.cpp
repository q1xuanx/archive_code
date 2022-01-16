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
int main(){
	int n;
	int a[100][100];
	taoMang(a,n);
	xuatMang(a,n);
	//duongCheoChinh(a,n);
	//duongCheoPhu(a,n);
	if(kiemTraDoiXung == 0){
		cout << "Ma tran khong doi xung";
	}else {
		cout <<"Ma tran doi xung";
	}
	return 0;
}
