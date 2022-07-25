#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int a,b;
	cin >> a >> b;
	int dem = 0;
	while (a <= b){
		a *= 3;
		b *= 2;
		dem++;		
	}         
	cout << dem;
	return 0;
}
