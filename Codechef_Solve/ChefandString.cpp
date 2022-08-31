#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (ll int i = a; i < b; i++)
const int inf = 1e9;
#define MAX 1000007
void solve()
{
	string s;
	cin >> s;
	string left = s, right = s;
	for (int i = 0; i < left.length() - 1; i++){
		left[i] = left[i+1];
	}
	left[left.length() - 1] = s[0];
	for (int i = 1; i < right.length(); i++){
		right[i] = s[i-1];
	}
	right[0] = s[s.length() - 1];
	if (left == right){
		cout << "YES" << "\n";
	}else {
		cout << "NO" << "\n";
	}
}
int main()
{
	fast;
	int t;
	cin >> t;
	while (t--){
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
*/
