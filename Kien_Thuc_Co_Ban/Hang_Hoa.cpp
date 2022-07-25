#include <iostream>
#include <fstream>
#define MAXX 1000
using namespace std;
typedef struct	hangHoa{
	char maHangHoa[5];
	int soLuong;
	float donGia;
	float soTien;
}hh;
void nhapHangHoa(hh &a){
	fflush(stdin);
	cout <<"\nNhap ma hang hoa: ";
	gets(a.maHangHoa);
	cout <<"\nNhap so luong: ";
	cin >> a.soLuong;
	cout <<"\nNhap don gia: ";
	cin >> a.donGia;
	a.soTien = (float)(a.soLuong * a.donGia);
}
void xuatHangHoa(hh a){
	cout <<"\nMa hang hoa: " << a.maHangHoa;
	cout <<"\nSo luong: " << a.soLuong;
	cout <<"\nDon gia: " << a.donGia;
	cout <<"\nSo tien: " << a.soTien;
}
void nhapMang(hh a[], int &n){
	cout <<"\nNhap so luong hang hoa: ";
	cin >> n; 
	for(int i = 0; i < n ; i++){
		nhapHangHoa(a[i]);
	}
}
void xuatMang(hh a[], int n){
	cout <<"\n******************************\n";
	cout <<"\nDANH SACH HANG HOA\n";
	for(int i = 0; i < n ; i++){
		xuatHangHoa(a[i]);
	}
	cout <<"\n******************************\n";
}
void ghiFile(hh a[], int n){
	ofstream outFile("C:/Users/Admin/Documents/DSHH.txt");
	if (!outFile){
		cout <<"\nERROR\n" << endl;
	}
	outFile << n << endl;
	for(int i = 0; i < n ; i++){
		outFile << a[i].maHangHoa << endl;
		outFile << a[i].soLuong << endl;
		outFile << a[i].donGia << endl;
		outFile << a[i].soTien << endl;
	}
	for(int i = 0 ; i < n; i++){
		if(a[i].soTien > 1000){
			outFile << a[i].maHangHoa << endl;
			outFile << a[i].soLuong << endl;
			outFile << a[i].donGia << endl;
			outFile << a[i].soTien << endl;
		}else{
			outFile <<"\nKhong co hang hoa can xuat !";
		}
	}
	outFile.close();
}
void docFile(hh a[], int n){
	ifstream inFile("C:/Users/Admin/Documents/DSHH.txt");
	if (!inFile){
		cout <<"\nERROR\n" << endl;
	}
	cout <<"\nDOC FLIE\n";
	cout <<"\nNhap so luong hang hoa: ";
	inFile >> n;
	cout << n;
	for(int i = 0; i < n ; i++){
		cout <<"\nMa hang hoa: ";
		inFile >> a[i].maHangHoa;
		cout << a[i].maHangHoa;
		cout <<"\nSo luong: ";
		inFile >> a[i].soLuong;
		cout << a[i].soLuong;
		cout <<"\nDon gia: ";
		inFile >> a[i].donGia;
		cout << a[i].donGia;
		cout <<"\nSo tien: ";
		inFile >> a[i].soTien;
		cout << a[i].soTien;
	}
	for(int i = 0; i < n ; i++){
		if(a[i].soTien > 1000){
			cout <<"\nMa hang hoa: ";
			inFile >> a[i].maHangHoa;
			cout << a[i].maHangHoa << endl;
			cout <<"\nSo luong: ";
			inFile >> a[i].soLuong;
			cout << a[i].soLuong << endl;
			cout <<"\nDon gia: ";
			inFile >> a[i].donGia;
			cout << a[i].donGia;
			cout <<"\nSo tien: ";
			inFile >> a[i].soTien;
			cout << a[i].soTien << endl;
		}else{
			cout <<"\nKhong co hang hoa can xuat !";
		}	
	}
	inFile.close();
}
int main(){
	int n;
	hh a[MAXX];
	nhapMang(a,n);
	//xuatMang(a,n);
	ghiFile(a,n);
	docFile(a,n);
	return 0;
}
