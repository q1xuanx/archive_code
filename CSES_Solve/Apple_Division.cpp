#include <bits/stdc++.h>
using namespace std;
#define int long long int
int findminans(int *arr, int currsum, int totalsum, int i)
{
    if (i == 0)
        return abs((totalsum - currsum) - currsum);
 
    return min(findminans(arr, currsum + arr[i], totalsum, i - 1), findminans(arr, currsum, totalsum, i - 1));
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int *arr = new int[n];
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalsum += arr[i];
    }
 
    cout << findminans(arr, 0, totalsum, n - 1) << endl;
    return 0;
}
