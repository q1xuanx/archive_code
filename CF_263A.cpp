#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[5][5];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			cin >> a[i][j];
		}
	}
	int dem = 0, tmp1 = 0, tmp2 = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			if (a[i][j] == 1){
				tmp1 = i;
				tmp2 = j;
			}
		}
	}
	while (tmp1 < 2){
		tmp1 += 1;
		dem++;
	}
	while (tmp1 > 2){
		tmp1 -= 1;
		dem++;
	}
	while (tmp2 > 2){
		tmp2 -= 1;
		dem++;
	}
	while (tmp2 < 2){
		tmp2 += 1;
		dem++;
	}
	cout << dem;
	return 0;
}
/*
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
3
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
1
*/
