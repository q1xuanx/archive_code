#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
#define MAX 1000007
void solve()
{
	int a; cin >> a;
	int b = (a / 3);
	int c = (a % 3);
	if (a % 2 != 0){
		cout << (a * 3) - (b + c) - 1 << "\n";
	}else {
		cout << (a *3) - (b + c) << "\n";
	}
}
int main()
{
	fast;
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
 
/*
L = a b c d
=> b c d a
	0 1 2
S = a b c;
=> R = c s[1] = b -> a s[2] = c -> b
	   0
 
	1 1 3 2		
	   5 5 1 3 2
*/
