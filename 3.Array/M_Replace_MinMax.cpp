#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minn = INT_MAX;
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        minn = min(a[i], minn);
        maxx = max(a[i], maxx);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == minn)
        {
            a[i] = maxx;
        }
        else if (a[i] == maxx)
        {
            a[i] = minn;
        }
        cout << a[i] << " ";
    }
    return 0;
}