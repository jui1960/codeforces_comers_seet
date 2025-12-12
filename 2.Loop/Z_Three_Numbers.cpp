#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    long long ans = 0;
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            int z = s - x - y;
            if (0 <= z && z <= k)
                ans++;
        }
    }
    cout << ans << '\n';

    return 0;
}