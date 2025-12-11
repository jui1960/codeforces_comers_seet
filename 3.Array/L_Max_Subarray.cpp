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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int mx = v[i];
            for (int j = i; j < n; j++)

            {
                mx = max(mx, v[j]);
                ans.push_back(mx);
            }
        }
        for (auto x : ans)
            cout << x << " ";
            cout<<'\n';
    }

    return 0;
}