#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, suma = 0, sumb = 0; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            suma += a[i];
        }
        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumb += b[i];
        }
        cout << (suma + sumb) - (*max_element(b.begin(),b.end())) << "\n";
    }
    return 0;
}
