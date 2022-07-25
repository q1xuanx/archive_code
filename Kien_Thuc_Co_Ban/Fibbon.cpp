#include <iostream>
using namespace std;

int fibbon (int n){
	if (n == 1 || n == 2){
		return 1;
	}
	return fibbon(n-1) + fibbon(n - 2); 
}
int main(){
	int n;
	cout << "Moi nhap so can tim: ";
	cin >> n;
	cout << "So can tim: " << fibbon(n);
	return 0;
}
