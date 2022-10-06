    #include <bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/hash_policy.hpp>
    // YOU CAN DO IT !
    using namespace std;
    using namespace __gnu_pbds;
    typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
    #define fast ios_base::sync_with_stdio(0), cin.tie(0);
    #define ll long long
    #define rep(i, a, b) for (int i = a; i < b; i++)
    #define rever(i, a) for (int i = a; i > 0; i--)
    #define pb push_back
    #define vt vector
    const int inf = 1e9;
    const int MAX = 1000001;

    void solve()
    {
        ll n,k; cin >> n >> k;
        vector<ll> a(n+1);
        for (int i = n - k + 1; i <= n; i++){
            cin >> a[i];
        }
        if (k == 1){
            cout << "YES" << "\n";
            return;
        }
        vector<ll> b(n+1);
        for (int i = n - k + 2; i <= n; i++){
            b[i] = a[i] - a[i-1];
        }
        if (!is_sorted(b.begin() + (n-k+2),b.end())){
            cout << "NO" << "\n";
            return;
        }
        if (a[n-k+1] > b[n-k+2] * (n-k+1)) {
            cout << "NO" << "\n";
            return;
        }
        cout << "YES" << "\n";
    }

    int main()
    {
        fast;
        int tc; cin >> tc;
        while (tc--){
            solve();
        }
        
        return 0;
    }
    //1 2 3 4 5 6
    //a e i o u
