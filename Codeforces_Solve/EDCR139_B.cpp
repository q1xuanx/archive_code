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
const int inf = 1e9;
#define MAX 100
// CODE HERE !

void solve()
{
	int n; cin >> n;
    string s; cin >> s;
	map<string,int> m;
	bool check = false;
	for (int i = 0; i+1 < s.length(); i++){
		string t = s.substr(i,2);
		if (m.count(t)){
			if (m[t] < i-1) check = true;
		}else {
			m[t] = i;
		}
	}
	cout << (check ? "YES\n" : "NO\n");
}
// Run Code
int main()
{
    fast;
    int test_case = 1;
    cin >> test_case;
    while (test_case--)
    {
        solve();
        //cout << "On" << " ";
    }
    return 0;
}

/*
180 240 120
t = 600
180 + 240 = 420
*/
