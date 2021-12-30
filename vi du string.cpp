#include <iostream>
#include <string.h>
#define Maxn 1000
using namespace std;
int demchuthuong (char str[]);
int demchuhoa (char str[]);
void timma(char str[]);
char* chuyendoichu(char str[]);     // goi y b1: chuyen cac ky tu cua chuoi thanh chu~ thuong   //b2: chuyen tat cac ky tu dau cua moi tu thanh chu hoa       
int main(){                                       // b3 chuyen ky tu dau cua chuoi thanh chu hoa ~
	char str[Maxn];
	int n;
	gets(str);
	cout <<"Cac chu thuong la: " << demchuthuong (str) << endl;
	cout <<"Cac chu hoa la: " << demchuhoa(str) << endl;
	timma(str);
	cout << chuyendoichu(str);
	return 0;
}
int demchuthuong (char str[]){
	int low = 0;
	for ( int i = 0; i < strlen(str); i++){
		if(islower(str[i])){
			low++;
		}
	}
	return low;
}
int demchuhoa(char str[]){
	int up = 0;
	for (int i = 0; i < strlen(str); i ++){
		if(isupper(str[i])){
			up++;
		}
	}
	return up;
}
void timma(char str[]){
	for (int i = 0; i < strlen(str); i++){
		cout << str[i] <<" - " << toascii(str[i]) << endl;
	}
}
char* chuyendoichu(char str[]){
	strlwr(str);
	for (int i = 0; i < strlen(str); i++){
		if (str[i] ==' ' && str[i+1] !=' '){
			str[i + 1] = toupper(str[i + 1]);	
			str[0] = toupper(str[0]);
		}
	}
	return str;
}
