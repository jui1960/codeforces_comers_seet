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
        vector<int> v(n);
        for (int i = 1; i <= n; i++)

        {
            cin >> v[i];
        }
        int ans = 0;
        int mn = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                ans = v[i] + v[j] + j - i;
                mn = min(mn, ans);
            }
        }
        cout << mn << " " << '\n';

        cout << '\n';
    }

    return 0;
}