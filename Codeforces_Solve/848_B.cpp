#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repp(i, a, b) for (int i = a; i <= b; i++)
#define rever(i, a) for (int i = a - 1; i >= 0; i--)
#define pb push_back
#define vt vector
#define mp make_pair
using namespace std;
// CODE HERE !
int p[100003], a[100003], ps[100003];
void solve()
{
	int n,m,d; cin >> n >> m >> d;
	repp(i,1,n) {
		cin >> p[i];
		ps[p[i]] = i;
	}
	repp(i,1,m) cin >> a[i];
	int ans = 1e9+1;
	for (int i = 1; i < m; i++){
		if (ps[a[i]] >= ps[a[i+1]] or ps[a[i+1]] > ps[a[i]] + d){
			ans = 0;
			break;
		}
		ans = min(ans,ps[a[i+1]] - ps[a[i]]); //find min dis for (ps[a[i]] >= ps[a[i+1]]) condition
		int need = d - (ps[a[i+1]] - ps[a[i]])/*find distance*/+ 1; //find how many time need to swap ps[a[i]] to left and ps[a[i+1]] to right
		int enough = (ps[a[i]] - 1) + (n - ps[a[i+1]]);
		if (enough >= need){
			ans = min(ans,need); // compair what is best
		}
	}
	cout << ans << "\n";
}
int main()
{
	fast;
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
