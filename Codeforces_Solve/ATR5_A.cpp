#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define rep(i,a,b) for (int i = a; i < b;i++)
const int inf = 1e9;
void solve (){
	int a,b; cin >> a >> b;
	char c[a][b];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b;j++){
			cin >> c[i][j];
		}
	}
	int maxX = -inf, minX = inf, maxY = -inf, minY = inf;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if (c[i][j] == 'B'){
				maxX = max(maxX,i);
				maxY = max(maxY,j);
				minX = min(minX,i);
				minY = min(minY,j);
			}
		}
	}
	cout << (maxX + minX)/2 + 1 << " " << (minY + maxY)/2+1;
}	
int main(){
	fast;
	solve();
	return 0;
}
