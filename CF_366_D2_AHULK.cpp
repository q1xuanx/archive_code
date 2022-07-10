#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int n;
	cin >> n;
	int tmp = n;
	string s;
	if (n == 1){
		cout << "I hate it";
		return 0;
	}
	int dem = 0;
	int i = 0;
	if (n % 2 == 0){
		while (n-- && n > 0){
			if (n % 2 != 0){
				s += "I hate that ";	
			}else {
				s += "I love that ";
			}
		}
	}
	if (n % 2 != 0){
		while (n-- && n > 0){
			if (n % 2 == 0){
				s += "I hate that ";	
			}else {
				s += "I love that ";
			}
		}
	}           
	if (tmp % 2 != 0){
		s += "I hate it";
	}else{
		s += "I love it";
	}
	cout << s;
	return 0;
}
