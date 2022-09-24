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
const int inf = 1e9;
const int MAX = 1000001;
/*
You are given n sticks with positive integral length a1,a2,…,an.

You can perform the following operation any number of times (possibly zero):

choose one stick, then either increase or decrease its length by 1. After each operation, all sticks should have positive lengths.
What is the minimum number of operations that you have to perform such that it is possible to select three of the n sticks and use them without breaking to form an equilateral triangle?

An equilateral triangle is a triangle where all of its three sides have the same length.
*/
void solve()
{
    ll n; cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }    
    sort(a,a+n);
    ll opr1 = inf;
    for (int i = 2; i < n; i++){
        opr1 = min(opr1,a[i] - a[i-2]);
    }
    cout << opr1 << "\n";
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
test
1 2 3 
0 1 2 
1 1 2 3 4 5 6 9

2 2 3
1 1 2 3 4
0 1 2 3
3 3 7 7
0 1 2
*/
