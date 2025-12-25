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
        if (n == 2)
            cout << 1 << '\n';

        else if (n >= 4)
        {
            int cnt = n / 4;
            if (n % 4 != 0)
            {
                cnt++;
                cout << cnt << '\n';
            }
            else
                cout << cnt << '\n';
        }
        else cout<<0<<'\n';
    }

    return 0;
}