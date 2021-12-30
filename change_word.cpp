#include<bits/stdc++.h>
#include <string.h>
using namespace std;

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
int main() {
	char str[10000];
	int n;
	cin >> n;
	cin.ignore();
	while (n--){
		fgets(str,10000,stdin);
		cout << chuyendoichu(str);
		cout << "\n";
	}
	return 0;
}
