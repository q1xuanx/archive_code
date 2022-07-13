#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
#define ll long long
#define Fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define PB push_back
int main(){
	Fastio;
	int n,k,tmp = 0,u1 = 5,i=1;
	cin >> n >> k;
	tmp1 = n;
	while (n--){
		tmp += 5 * i;
		i++;
	}
	i = i - 1;
	if (tmp + k <= 240){
		cout << tmp1;
	}else{
		while (tmp + k > 240){
			tmp -= 5 * i;
			i--;
		}
		cout << i;
	}
	return 0;
}
