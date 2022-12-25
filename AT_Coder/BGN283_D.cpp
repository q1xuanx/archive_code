#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define debugg cout << "\nDebug...OK !\n"
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rever(i, a) for (int i = a; i > 0; i--)
#define pb push_back
#define vt vector
const int inf = 5e3 + 5;
#define MAX 100
// CODE HERE !
string s,t;
void solve()
{
	cin >> s;
	bool check = true;
	vt<char> a ={0};
	int cnt = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '(' or s[i] == ')' ){
			cnt++;
		}
	}
	if (cnt == 0){
		cout << "No\n";
	}else {
		for (int i = 0; i < s.length(); i++){
			if (s[i] == '(') continue;
			else if (s[i] >= 'a' and s[i] <= 'z'){
				for (int j = 0; j < a.size(); j++){
					if (s[i] == a[j]){
						cout << "No\n";
						return;
					}
				}
				a.pb(s[i]);
			}else if (s[i] == ')'){
				reverse(a.begin(),a.end());
				for (int j = 0; j < i; j++){
					if (a.empty()) break;
					else a.pop_back();
				}
			}
		}
		cout << "Yes\n";
	}
}

// Run Code
int main()
{
    fast;
    int test_case = 1;
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    // cout << 0 % 2 << " ";
	return 0;
}

/*
-6 -2 0 4 35 
*/
