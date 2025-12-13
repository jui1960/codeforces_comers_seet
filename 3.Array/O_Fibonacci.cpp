#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << '\n';

        return 0;
    }
    else if (n == 2)
    {
        cout<<1<<'\n';
        return 0;
    }

    long long a = 0, b = 1,sum = 0;;
    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << b << '\n';

    return 0;
}
