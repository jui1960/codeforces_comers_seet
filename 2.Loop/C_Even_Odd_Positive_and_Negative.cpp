#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even++;
            if (v[i] == 0)
                continue;
            else if (v[i] < 0)
                neg++;
            else
                pos++;
        }
        else
        {
            odd++;
            if (v[i] < 0)
                neg++;
            else
                pos++;
        }
    }
    cout << "Even: "
         << even << '\n'
         << "Odd: "
         << odd << '\n'
         << "Positive: " << pos << '\n'
         << "Negative: " << neg;

    return 0;
}