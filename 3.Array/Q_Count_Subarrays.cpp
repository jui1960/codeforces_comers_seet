#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long ans = 1;
        long long ans2 = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                ans2++;
            }
            else
            {
                ans2 = 1;
            }
            ans += ans2;
        }
        cout << ans << '\n';
    }

    return 0;
}