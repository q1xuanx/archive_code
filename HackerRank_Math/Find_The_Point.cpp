#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
void solve (){
	float px,py,qx,qy,rx,ry,tmpx,tmpy;
	cin >> px >> py >> qx >> qy;
	tmpx = qx - px;
	rx = tmpx + qx;
	tmpy = qy - py;
	ry = tmpy + qy;
	cout << rx << " " << ry << "\n";
}	
int main(){
	fast;
	int t; cin >> t;
	while(t--)
	solve();
	return 0;
}

