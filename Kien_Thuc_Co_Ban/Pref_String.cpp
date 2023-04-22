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
#define mp make_pair
#define MAX 101
// CODE HERE !
vector<int> pref(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
void solve(){
	string s, s1; cin >> s >> s1;
	s = s1 + "#" + s;
	vt<int> a = pref(s);
	int cnt = 0;
	for (int i = 0; i < s.length(); i++){
		if (s1.size() == a[i]) cnt++;
	}
	cout << cnt << "\n";
}
int main(){
	fast;
	int tc = 1;
	//cin >> tc;
	while(tc--){
		solve();
	}
}
//count occurs of string s1 from string s
