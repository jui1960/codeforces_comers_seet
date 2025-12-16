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
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != v1[i])
        {
            ans = 1;
            break;
        }
    }
    if (ans == 0)
        cout << "yes\n";
    else
        cout << "no\n";
    return 0;
}