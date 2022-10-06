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
        ll n; cin >> n;
        ll sum = 0;
        ll a[n];
        for (int i = 1; i <= n; i++) {a[i] = i; sum += a[i];}
        if (sum % 2 != 0) cout << "NO";
        else {
            cout << "YES" << "\n";
            ll div = sum / 2;
            vt<ll> temp1;
            for (int i = n; i > 0; i--){
                if (div >= a[i]){
                    div -= a[i];
                    temp1.pb(a[i]);
                    a[i] = 0;
                }
                if (div <= 0) break;
            }
            reverse(temp1.begin(),temp1.end());
            cout << temp1.size() << "\n";
            for (int i = 0; i < temp1.size(); i++){
                cout << temp1[i] << " ";
            }
            cout << "\n";
            ll size = 0;
            for (int i = 1; i <= n; i++){
                if (a[i] != 0) size++; 
            }
            cout << size << "\n";
            for (int i = 1; i <= n; i++){
                if(a[i] != 0){
                    cout << a[i] << " ";
                }
            }
        }
    }

    int main()
    {
        fast;
        int tc = 1; //cin >> tc;
        while (tc--){
            solve();
        }
        
        return 0;
    }
    //1 2 3 4 5 6
    //a e i o u
