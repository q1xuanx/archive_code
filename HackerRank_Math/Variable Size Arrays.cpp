#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
const int MAX = 1e5+23;
//void solve (){
//    
//}    
int main(){
    fast;
   	int n,q,tmp,b,c,x;
   	vector<vector<int> > tmp2;
//	int a[1000][1000];
   	cin >> n >> q;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		vector <int> a;
		for (int j = 0; j < tmp; j++){
			cin >> x;
			a.push_back(x);
		}
		tmp2.push_back(a);
	}
	for (int i = 0; i < q; i++){
		cin >> b >> c;
		cout << tmp2[b][c] << endl;
	}
    return 0;
}

