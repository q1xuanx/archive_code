#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
int main(){
	fast;
	string a,b,sum ="";
	cin >> a >> b;
	if (a.length() > b.length()){
		swap(a,b);
	}
	int def = b.length() - a.length(), carry = 0;
	int intSum;
	for (int i = a.length()-1; i >= 0; i--){
		intSum = ((a[i]-'0') +(b[i+def]-'0') +carry);
		sum.push_back(intSum%10+'0');
		carry = intSum/10;
	}
	for (int i = def-1; i >= 0; i--){
		intSum = ((b[i]-'0') + carry);
		sum.push_back(intSum%10 + '0');
		carry = intSum/10;
	}
	if(carry){
		sum.push_back(carry+'0');
	}
	reverse(sum.begin(),sum.end());
	cout << sum;
	return 0;
}

