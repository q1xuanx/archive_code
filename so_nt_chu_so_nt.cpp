#include <bits/stdc++.h>
using namespace std;
int nt (int n){
	for (int i = 2; i*i <= n; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}
int chuSoNt (int n){
	while (n){
		int tmp = n % 10;
		if (tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7){
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main (){
    int a,b;
    cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b;i++){
    	if (nt(i) && chuSoNt(i)){
    		dem++;
		}
	}
	cout << dem;
	return 0;
}
