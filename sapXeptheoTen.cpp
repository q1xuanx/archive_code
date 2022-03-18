#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
typedef struct sinhVien {
	char hoTen[32];
	char maSo[32];
	int ngay,thang,nam;
	char gioiTinh[10];
	char lop[10];
	int diemToan, diemLy, diemHoa;
}sv;
void nhap1SinhVien (sinhVien * a){
	fflush(stdin);
	cout << "Nhap ho ten sinh vien: ";
	gets(a->hoTen);
	fflush(stdin);
	cout << "Nhap ma so sinh vien: ";
	gets(a->maSo);
	fflush(stdin);
	cout << "Nhap ngay thang nam sinh" << "\n";
	cout << "Nhap ngay: ";
	cin >> a->ngay;
	cout << "Nhap thang: ";
	cin >> a->thang;
	cout << "Nhap nam: ";
	cin >> a->nam;
	fflush(stdin);
	cout << "Nhap gioi tinh: ";
	gets(a->gioiTinh);
	fflush(stdin);
	cout << "Nhap lop: ";
	gets(a->lop);
	cout << "Nhap diem 3 mon toan ly hoa: ";
	cin >> a->diemToan >> a->diemLy >> a->diemHoa;
}
void xuat1SinhVien (sinhVien *a){
	cout <<"******************************" << "\n";
	cout << "Ho ten sinh vien: " << a->hoTen << "\n";
	cout << "Ma so sinh vien: " << a->maSo << "\n";
	cout << "Ngay thang nam sinh: " << a->ngay <<"/" << a->thang << "/" << a->nam << "\n";
	cout <<"Gioi tinh: " << a->gioiTinh << "\n";
	cout << "Lop: " << a->lop << "\n";
	cout << "Diem mon toan: " << a->diemToan << " mon ly: " << a->diemLy << " mon hoa: " << a->diemHoa << "\n";
	cout <<"******************************" << "\n";
}
void nhapDS (sv *a, int n){
	for (int i = 0; i < n; i++){
		nhap1SinhVien(a + i);
	}
}
void xuatDS (sv * a, int n){
	for (int i = 0; i < n; i++){
		xuat1SinhVien(a+i);
	}
}
void xuatThongTin (sv * a, int n, char x[]){
	for (int i = 0; i < n; i++){
		if (strstr((a+i)->maSo,x)){
			xuat1SinhVien(a + i);
		}
	}
}
void sinhVienThuocNganh (sv * a, int n){
	for (int i = 0; i < n; i++){
		if (strstr((a+i)->lop,"CNTT")){
			xuat1SinhVien(a+i);
		}
	}
}
void sinhVienNu(sv * a, int n){
	for (int i = 0; i < n ;i++){
		if (strstr((a+i)->gioiTinh,"Nu") && strstr((a+i)->lop,"CNTT")){
			xuat1SinhVien(a+i);
		}
	}
}
void xuatDSLop (sv * a, int n){
	char t[20];
	for (int i = 1; i < n; i++){
		for (int j = 1; j < n; j++){
			if (strcmp((a+j-1)->lop,(a+j)->lop)>0){
				strcpy(t,(a+j-1)->lop);
				strcpy((a+j-1)->lop,(a+j)->lop);
				strcpy((a+j)->lop,t);
			}
		}
	}
	for (int i = 0; i < n; i++){
		xuat1SinhVien(a+i);
	}
}
int main(){
	sv * a, *b;
	sv c;
	int n;
	a = &c;
//	nhap1SinhVien(a);
//	xuat1SinhVien(a);
	cout << "\n";
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	b = (sv *)calloc(n,sizeof(sv));
	nhapDS(b,n);
	xuatDS(b,n);
	char x[32];
	fflush(stdin);
	cout << "Nhap ma so sinh vien can tim: ";
	gets(x);
	xuatThongTin(b,n,x);
	cout << "\n";
	cout << "SINH VIEN THUOC NGANH CNTT" << "\n";
	sinhVienThuocNganh(b,n);
	cout << "\n";
	cout <<"SINH VIEN NU THUOC NGANH CNTT" << "\n";
	sinhVienNu(b,n);
	cout << "\n";
	cout << "DANH SACH SINH VIEN THEO LOP " << "\n";
	xuatDSLop(b,n);
	return 0;
}
