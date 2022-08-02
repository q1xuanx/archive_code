#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
void solve (){
	int n,c = 0; cin >> n;
	int tmp = n % 4;
	int max1 = 0, max2 = 0;
	if (tmp == 1){
		cout << 0 <<" "<< "A";
		return;
	}
	max1 = (n+1)%4;
	max2 = (n+2)%4;
//	cout << max1 <<" " << max2;
	if (max1 == 1){
		cout << 1 << " " << "A";
		return;
	}else if (max2 == 1){
		cout << 2 << " " << "A";
		return;
	}
	if (max1 == 3){
		cout << 1 <<" " << "B";
		return;
	}else if (max2 == 3){
		cout << 2 << " " << "B";
		return;
	}
	if (max1 == 2){
		cout << 1 << " " << "C";
		return;
	}else if (max2 == 2){
		cout << 2 << " " << "C";
		return;
	}
}
int main(){
    fast;
   	solve();
	//cout << 100 % 4;
	return 0;
}
