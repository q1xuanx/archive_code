/*3
6 4 2
aaaaaa
bbbb
5 9 3
caaca
bedededeb
7 7 1
noskill
wxhtzdy
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
	int n,m,k;
	cin >> n >> m >> k;
	vector <char> a(n);
	vector <char> b(m);
	vector <char> c;
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int i = 0, j = 0, k1 = 0, k2 = 0;
	while (i < n and j < m){
		if ((a[i] < b[j] || k2 == k ) and k1 != k){
			c.push_back(a[i]);
			i++;
			k1++;
			k2 = 0;
		}else if (k2 != k){
			c.push_back(b[j]);
			k2++;
			j++;
			k1 = 0;
		}
	}
	for (int i = 0; i < c.size(); i++){
		cout << c[i];
	}
	cout << "\n";
	}
	return 0;              
}          
