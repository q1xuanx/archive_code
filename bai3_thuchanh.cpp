#include <iostream>
using namespace std;
int UCLN (int a,int b){
	if (a * b == 0){
		return a;
	}
	if (a > b){
		return UCLN(a-b,b);
	}else {
		return UCLN (a,b-a);
	}
}
int BCNN (int a, int b){
	return (a * b) / UCLN(a,b);
}
int main(){
	int a,b;
	cout << "Moi nhap 2 so a,b: ";
	cin >> a >> b;
	cout << "Uoc chung lon nhat cua 2 so: " << UCLN(a,n) << "\n";
	cout << "Boi chung nho nhat cua 2 so: " << BCNN(a,n) << "\n";
	return 0;
}
