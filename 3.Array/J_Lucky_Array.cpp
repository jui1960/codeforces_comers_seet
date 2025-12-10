#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(v[i], mn);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == mn)
        {
            cnt++;
        }
    }
    if (cnt % 2 != 0)
        cout << "Lucky\n";
    else
        cout << "Unlucky\n";

    return 0;
}