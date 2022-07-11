#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(1);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n;
		if (n == 1){
			cout << 0 << "\n";
			continue;
		}else if (n == 10){
			cout << 0 << "\n";
			continue;
		}else if (n == 100){
			cout << 0 << "\n";
			continue;
		}else if (n == 1000){
			cout << 0 << "\n";
			continue;
		}else if (n == 10000){
			cout << 0 << "\n";
			continue;

		}else if (n == 100000){
			cout << 0 << "\n";
			continue;
		}else if (n == 1000000){
			cout << 0 << "\n";
			continue;
		}else if (n == 10000000){
			cout << 0 << "\n";
			continue;
		
		}else if (n == 100000000){
			cout << 0 << "\n";
			continue;
	
		}else if (n == 1000000000){
			cout << 0 << "\n";
			continue;
		
		}   
		else if (n < 10){
			cout << n - 1 << "\n";
				   continue;
		}else if (n < 100){
			cout << n - 10 << "\n";
			continue;
		}else if (n < 1000){
			cout << n - 100 << "\n";
						continue;
		}else if (n < 10000){
			cout << n - 1000 << "\n";
					continue;
		}else if (n < 100000){
			cout << n - 10000 << "\n";
			continue;
		}else if (n < 1000000){
			cout << n - 100000 << "\n";
			continue;
		}else if (n < 10000000){
			cout << n - 1000000 << "\n";
			continue;
		}else if (n < 100000000){
			cout << n - 10000000 << "\n";
			continue;
		}else if (n < 1000000000){
			cout << n - 100000000 << "\n";
			continue;
		}	
	}
	return 0;
}
