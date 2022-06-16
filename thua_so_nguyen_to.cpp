#include <bits/stdc++.h>
using namespace std;
void thua_so_nt (int n){
	for (int i = 2; i <= sqrt(n); i++){
		while (n % i == 0){
			cout << i << " ";
			n /= i;
		}
	}
	if (n != 1){
		cout << n;
	}
}
int main (){
    int n;
    cin >> n;
    thua_so_nt(n);
	return 0;
}
