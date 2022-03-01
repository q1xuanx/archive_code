#include <iostream>
#include <windows.h>
using namespace std;
void taoMang (int a[][100], int &dong, int &cot){
	cin >> dong;
	cin >> cot;
	for(int i = 0; i < dong; i++){
		for(int j = 0; j < cot; j++){
			cout << j + 1 << " ";
		}
		cout << "\n";
	}
}
void taoMangX (int a[][100], int dong, int cot){
	cin >> dong;
	cin >> cot;
	for(int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout << "x" << " ";
		}
		cout << "\n";
	}
}
void veTamGiac (int n){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i; j++){
			cout <<"  ";
		}
		for(int k = 1; k <= 2 * i - 1; k++){
			if (k == 1 || k == 2 * i - 1 || i == n){
				cout << "* ";
			}else {
				cout << "* ";
			}
		}
		cout <<"\n";
	}
}
void veTamGiacSo (int n){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i; j++){
			cout <<"  ";
		}
		for(int k = 1; k <= 2 * i - 1; k++){
			if (k == 1 || k == 2 * i - 1 || i == n){
				cout << k << " ";
			}else {
				cout << k << " ";
			}
		}
		cout <<"\n";
	}
}

int main (){
	int a[100][100], dong, cot,h,x,y;
	//taoMang(a,dong,cot);
	//taoMangX(a,dong,cot);
	cin >> h;
	veTamGiac(h);
	veTamGiacSo(h);
	
	return 0;
}
