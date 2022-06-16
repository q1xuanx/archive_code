#include <bits/stdc++.h>
using namespace std;
int kt[100000001];
int nt (int n){
	for (int i = 2 ; i * i <= n; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}
void sangNT(){
	for (int i = 0; i <= 1000000; i++){
		kt[i] = 1;
	}
	kt[0] = kt[1] = 0;
	for (int i = 2; i <= 1000; i++){
		if (kt[i]){
			for (int j = i * i; j <= 1000000; j += i){
				kt[j] = 0;
			}
		}
	}
}
int main (){
	int n;
	sangNT();
    cin >> n;
    for (int i = 2; i <= n; i++){
    	if (kt[i]){
			cout << i << " ";
		}
	}
	return 0;
}
