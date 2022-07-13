#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
#define ll long long
#define Fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define PB push_back
int main(){
	Fastio;
	int t;
	cin >> t;
	while (t--){
	int w,h,n,d = 1;
	cin >> w >> h >> n;
	if (w % 2 == 0 || h % 2 == 0){
		while (w % 2 == 0){
			w /= 2;
			d *= 2;
		}
		while (h % 2 == 0){
			h /= 2;
			d *= 2;
		}
	}
	if (d >= n || n == 1){
		cout << "YES\n";
	}else {
		cout << "NO\n";
	}
	}
	return 0;
}
