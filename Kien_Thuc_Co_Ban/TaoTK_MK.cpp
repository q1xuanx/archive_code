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
    //fflush(stdin);
    vt<pair<string,string>> ans;
    for (int i = 0; i < n; i++){
        string s;
        fflush(stdin);
        getline(cin,s);
        //fflush(stdin);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' and s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        vt<char> t;
        string temp1,temp2;
        int idx1 = 0,idx2 = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == ' '){
                if (s[i+1] == '0' or s[i+1] == '1' or s[i+1] == '2'){
                    idx2 = i+1;
                    int j = i - 1;
                    while (s[j] != ' '){
                        temp1 += s[j];
                        j--;
                    }
                    idx1 = j;
                    reverse(temp1.begin(),temp1.end());
                }
            }
        }
        temp1 += s[0];
        for (int i = 0; i < idx1; i++){
            if (s[i] == ' '){
                temp1 += s[i+1];
            }
        }
        for (int i = idx2; i < s.length(); i++){
            if (i == idx2 and s[idx2] == 48){
                continue;
            }else if (s[i] == 47){
                if (s[i+1] == 48){ 
                   i++;
                   continue;
                }
            }else if (s[i] >= 48 and s[i] <= 57) temp2 += s[i];
        }
        string temp3;
        for (int i = 0; i < temp1.length(); i++){
            if (temp1[i] != ' '){
                temp3 += temp1[i];
            }
        }
        ans.pub(make_pair(temp3,temp2));
    }
    map<string,int> m;
    //cout << ans[0].first << "@xyz.edu.vn" << "\n" << ans[0].second << "\n";
    for (int i = 0; i < ans.size(); i++){
        if (m.count(ans[i].first) == 0){
            cout << ans[i].first << "@xyz.edu.vn" << "\n" << ans[i].second << "\n";
            m[ans[i].first] = 2;
        }else {
            cout << ans[i].first << m[ans[i].first] << "@xyz.edu.vn" << "\n" << ans[i].second << "\n";
            m[ans[i].first] += 1;
        }
    }
}
//
// Run Code
int main()
{
    //fast;
    int test_case = 1;
    //cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}

/*
4 3 16
4 * 5 
4 + 3 = 7
20 + (4 * 5)
7 + (4 + 3) = 14 
16 - 14 = 2 < x
*/
