#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0, md = 0;

        int lf = 0, rg = n - 1;

        while (lf <= rg)
        {
            md = (lf + rg) / 2;
            if (a[md] == x)
            {
                flag = 1;
                break;
            }

            else if (a[md] < x)
            {
                lf = md + 1;
                // md = (lf + rg) / 2;
            }
            else
            {
                rg = md - 1;
                // md = (lf + rg) / 2;
            }
        }
        if (flag == 1)
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}
