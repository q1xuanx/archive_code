#include <bits/stdc++.h>
using namespace std;
int ucln (int a, int b){
	int r = a % b;
	while (r != 0){
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
int main(){
	int a,b;
	cin >> a >> b;
	ucln(a,b);
	return 0;	
}
