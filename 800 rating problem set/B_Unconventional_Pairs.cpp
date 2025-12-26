#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v(n), a;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long int ans = 0;
        for (int i = 0; i < n; i += 2)
        {

            ans = abs(v[i] - v[i + 1]);
            a.push_back(ans);
        }
        cout << *max_element(a.begin(), a.end()) <<'\n';
    }
}