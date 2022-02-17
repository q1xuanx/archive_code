#include <iostream>
using namespace std;
#define MAX1 100
#define MAX2 100
void Nhap (int a[][MAX2], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << "a["  << i <<"][" << j << "]";
			cin >> a[i][j];
		}
	}
}
void Xuat (int a[][MAX2], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
int Tinhtongbien (int a[][MAX2], int dong, int cot){
	int tong = 0;
	for(int i = 0; i < dong; i++){
		tong += a[i][0] + a[i][cot - 1];
	}
	for(int j = 1; j < cot - 1; j++){
		tong += a[0][j] + a[dong - 1][j];
	}
	return tong;
}
int Giatrilonnhat (int a[][MAX2], int dong, int cot){
	int max = 0;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			if (max < a[i][j]){
				max = a[i][j];
			}
		}
	}
	return max;
}
void Giatrilonnhatcacdong (int a[][MAX2], int dong, int cot){
	int max;
	for(int i = 0; i < dong; i++){
		max = a[i][0];
		for(int j = 0; j < cot; j++){
			if (max < a[i][j]){
				max = a[i][j];
			}
		}
		cout << "\n";
		cout << max << " ";
	}
}
void Giatrinhonhatcaccot(int a[][MAX2], int dong, int cot){
	int min;
	for(int j = 0; j < cot; j++){
		min = a[0][j];
		for(int i = 1; i < dong; i++){
			if (min > a[i][j]){
				min = a[i][j];
			}
		}
		cout << "\n";
		cout << min << " ";
	}
}
int main(){
	int dong, cot, a[MAX1][MAX2];
	cout << "Nhap dong: ";
	cin >> dong;
	cout << "Nhap cot: ";
	cin >> cot;
	Nhap(a,dong,cot);
	Xuat(a,dong,cot);
	//cout << "Tong ngoai bien cua mang 2 chieu: " << Tinhtongbien(a,dong,cot);
	Giatrilonnhatcacdong(a,dong,cot);
	Giatrinhonhatcaccot(a,dong,cot);
	return 0;
}
