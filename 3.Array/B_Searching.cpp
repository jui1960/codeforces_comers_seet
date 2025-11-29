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
    int x;
    cin >> x;
    int indx = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            cout << i;
            indx = 1;
            break;
        }
    }
    if (indx == 0)
    {
        cout << "-1";
    }
    return 0;
}

