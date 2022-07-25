#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	int a;
	cin >> a;
	int max = 0;
	for (int i = 1; i <= a ; i++){
		if (i / 2 > max){
			max = i / 2;
		}
	}
	cout << max << endl;
	}
	return 0;
}
