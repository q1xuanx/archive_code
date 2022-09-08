#include <bits/stdc++.h>
using namespace std;
int arr[10000001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int somax = 0, vitri = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= somax)
            {
                somax = arr[i];
                vitri = i + 1;
            }
        }
        cout << vitri << "\n";
    }
 
    return 0;
}
