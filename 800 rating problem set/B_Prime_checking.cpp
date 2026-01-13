#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;

    if (N == 2)
    {
        cout << "YES\n";
    }
    else if (N <= 1 || N % 2 == 0)
    {
        cout << "NO\n";
    }
    else
    {
        int flg = 0;
        for (ll i = 3; i * i <= N; i += 2)
        {
            if (N % i == 0)
            {
                flg = 1;
                break;
            }
        }
        if (flg == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
