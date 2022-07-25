#include <iostream>
using namespace std;
void thap (int n,char a, char b, char c){
	if (n == 1){
		cout << a << " -> " << c << "\n";
		return;
	}
	thap(n-1,a,c,b);
	thap(1,a,b,c);
	thap(n-1,b,a,c);
}
int main(){
	int n;
	char a,b,c;
	a = 'A', b = 'B', c = 'C';
	cout <<"Nhap so dia: ";
	cin >> n;
	thap(n,a,b,c);
	return 0;
}
