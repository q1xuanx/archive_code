    #include <bits/stdc++.h>
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/hash_policy.hpp>
    using namespace std;
    using namespace __gnu_pbds;
    typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
    #define fast ios_base::sync_with_stdio(0), cin.tie(0);
    #define ll long long
    #define rep(i, a, b) for (int i = a; i < b; i++)
    #define rever(i, a) for (int i = a; i > 0; i--)
    #define pub push_back
    #define vt vector
    const int inf = 1e9;
    const int MAX = 30;
    // CODE HERE !
    void solve()
    {
        int n; cin >> n;
        int ans = 0;
        for (int i = n; i > 0; i-= 2){
            ans += i * i;
        }
        cout << ans << "\n";
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
        }
        //cout << 0 % 2 << " ";
        return 0;
    }

    /*
    ossu
    0123

    i = 0;
    o != s
    i = 1
    s == s;
    o ss u 
    0 12 3
    */
