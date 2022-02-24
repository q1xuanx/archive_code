#include <iostream>
#include <math.h>
using namespace std;
void nhapMang (int a[][100], int &dong, int &cot){
	cout <<"Moi nhap dong: ";
	cin >> dong;
	cout <<"Moi nhap cot: ";
	cin >> cot;
	for(int i = 0 ; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cin >> a[i][j];
		}
	}
}
void xuatMang (int a[][100], int dong, int cot){
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}
void soLonNhatMoiDong (int a[][100], int dong, int cot){
	int max;
	for(int i = 0; i < dong; i++){
		max = a[0][i];
		for(int j = 0; j < cot; j++){
			if (a[i][j] > max){
				max = a[i][j];
			}
		}
		cout << "So lon nhat dong " << i << " la: " << max << "\n";
	}
}
void soLonNhatMoiCot (int a[][100], int dong, int cot){
	int max;
	for(int i = 0; i < dong; i++){
		max = a[i][0];
		for(int j = 0; j < cot; j++){
			if (a[j][i] > max){
				max = a[j][i];
			}
		}
		cout << "So lon nhat cot " << i << " la: " << max << "\n";
	}
}
void tongMoiDong (int a[][100], int dong, int cot){
	int tong;
	for(int i = 0; i < dong; i++){
		tong = 0;
		for(int j = 0; j < cot; j++){
			tong += a[i][j];
		}
		cout << "Tong dong " << i << " la: "  << tong << "\n";
	}
}
void tongMoiCot(int a[][100], int dong, int cot){
	int tong;
	for(int i = 0 ; i < dong; i++){
		tong = 0;
		for(int j = 0; j < cot; j++){
			tong += a[j][i];
		}
		cout << "Tong cot " << i << " la: "  << tong << "\n";
	}
}
int tongBien(int a[][100], int dong, int cot){
	int tong = 0;
	for(int i = 0; i < dong; i++){
		tong += a[i][0] + a[i][cot - 1];
	}
	for(int j = 1; j < cot - 1; j++){
		tong += a[0][j] + a[dong - 1][j];
	}
	return tong;
}
void cacSoNamTrenBien (int a[][100], int dong, int cot){
	for(int i = 0; i < dong; i++){
		cout << a[i][0] << " " << a[i][cot - 1] << " ";
	}	
	for(int j = 1; j < cot - 1; j++){
		cout << a[0][j] <<" "<< a[dong - 1][j] << " ";
	}
}
int bienLonNhat (int a[][100], int dong, int cot){
	int max = 0;
	for(int i = 0; i < dong; i++){
		if (max < a[i][0]){
			max = a[i][0];
		}
		if (max < a[i][cot - 1]){
			max = a[i][cot - 1];
		}
	}
	for(int j = 1; j < cot - 1; j++){
		if (max < a[0][j]){
			max = a[0][j];
		}
		if (max < a[dong - 1][j]){
			max = a[dong - 1][j];
		}
	}
	return max;
}
int bienNhoNhat (int a[][100], int dong, int cot){
	int min = a[0][0];
	for(int i = 0; i < dong; i++){
		if (min > a[i][0]){
			min = a[i][0];
		}
		if (min > a[i][cot - 1]){
			min = a[i][cot - 1];
		}
	}
	for(int j = 1; j < cot - 1; j++){
		if (min > a[0][j]){
			min = a[0][j];
		}
		if (min > a[dong - 1][j]){
			min = a[dong - 1][j];
		}
	}
	return min;
}
int nguyenTo (int n){
	if (n < 2) return 0;
	int k = sqrt(n);
	for(int i = 2; i <= k; i++){
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int dongNhieuNTNhat(int a[][100], int dong, int cot){
	int max = 0, dem, tam = 0;
	for(int i = 0; i < dong; i++){
		dem = 0;
		for(int j = 0; j < cot; j++){
			if (nguyenTo(a[i][j])){
				dem++;
			}
		}
		if (dem > max){
		max = dem;
		tam = i;
	}
	}
	return tam;
}
int chinhPhuong (int n){
	return sqrt(n) == int (sqrt(n)); 
}
int cotNhieuCPNhat(int a[][100], int dong, int cot){
	int max = 0, dem, tam = 0;
	for(int i = 0; i < dong; i++){
		dem = 0;
		for(int j = 0; j < cot; j++){
			if(chinhPhuong(a[j][i])){
				dem++;
			}
		}
		if (dem > max){
			max = dem;
			tam = i;
		}
	}
	return tam;
}
int soNTLonNhat (int a[][100], int dong, int cot){
	int max = -1;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			if (nguyenTo(a[i][j])){
				if (a[i][j] > max){
					max = a[i][j];
				}
			}
		}
	}
	return max;
}
int demUoc (int n){
	int k = sqrt(n);
	int dem = 2;
	for(int i = 2; i < k; i++){
		if (n % i == 0){
			dem+= 2;
		}
	}
	if (n % k == 0){
		dem++;
	}
	return dem;
}
int uocMax (int a[][100], int dong, int cot){
	int max = 2, temp,t;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			temp = demUoc(a[i][j]);
			if (max < temp){
				max = temp;
				t = a[i][j];
			}
		}
	}
	return t;
}
int main (){
	int a[100][100], dong, cot;
	int n;
	nhapMang(a,dong,cot);
	xuatMang(a,dong,cot);
	//soLonNhatMoiDong(a,dong,cot);
	//soLonNhatMoiCot(a,dong,cot);
	//tongMoiDong(a,dong,cot);
	//tongMoiCot(a,dong,cot);
	//cout <<"Tong bien: " << tongBien(a,dong,cot) << "\n";
	//cacSoNamTrenBien(a,dong,cot);
	//cout << "So lon nhat trong bien: " << bienLonNhat(a,dong,cot) <<"\n";
	//cout << "So nho nhat trong bien: " << bienNhoNhat(a,dong,cot) << "\n";
 	cout <<"Dong co nhieu so NT nhat: " << dongNhieuNTNhat(a,cot,dong) << "\n";
 	cout <<"Cot co nhieu so CP nhat: " << cotNhieuCPNhat(a,cot,dong) << "\n";
 	//cout << "So nguyen to lon nhat trong mang la: " << soNTLonNhat(a,dong,cot) << "\n";
 	//cout << "Uoc so lon nhat la: " << uocMax(a,dong,cot);
	return 0;
}
