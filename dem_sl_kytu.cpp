#include <bits/stdc++.h>
using namespace std;
int soLanXuatHien (char s[], char a){
	int dem = 0;
	for (int i = 0; i < strlen(s); i++){
		if (s[i] == a){
			dem++;
		}
	}
	return dem;
}
int main (){
	char s[100];
	int max = 0;
	cout << "Moi nhap chuoi: ";
	gets(s);
	char tam;
	for (int i = 0; i < strlen(s); i++){
		if (soLanXuatHien(s,s[i]) > max){
			max = soLanXuatHien(s,s[i]);
			tam = s[i];
		}
	}
	cout << "Ky tu xuat hien nhieu nhat trong chuoi la: " << tam;
	return 0;
}
