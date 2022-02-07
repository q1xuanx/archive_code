#include <bits/stdc++.h>
using namespace std;
void taoMang(int a[], int &n){
	cout << "Phan tu mang: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
void xuatMang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] <<" ";
	}
}
void sapXep(int a[], int n){
	int temp;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if (a[i] > a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}
		}
	}
	xuatMang(a,n);
}
bool binarySearch(int a[], int n, int x){
	int trai = 0; 
	int phai = n - 1;
	int giua;
	do{
		giua = (trai + phai) / 2;
		if (a[giua] == x){
			return true;
		}else if (a[giua] > x){
			phai = giua - 1;
		}else {
			trai = giua + 1;
		}
	}while (trai <= phai);
	return false;
}
int main (){
	int a[1000], n,x;
	taoMang(a,n);
	sapXep(a,n);
	cin >> x;
	if (binarySearch(a,n,x)){
		cout <<"Co phan tu can tim !";
	}else {
		cout <<"Khong co phan tu can tim !";
	}
	return 0;
}
