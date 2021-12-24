#include <bits/stdc++.h>
using namespace std;
void nhap (char s[]){
	int dem = (s[0] != ' ');
	for(int i = 0; i < strlen(s); i++){
		if (s[i] == ' ' && s[i + 1] != ' '){
			dem++;
		}
	}
	cout << dem;
}
int main(){	
	char s[10000];
	fgets(s,10000,stdin);
	nhap(s);
	return 0;
}
