#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int mx = 0;
    for (int i = 1; i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (i > mx)
            {
                mx = i;
            }
        }
    }
    cout << mx;

    return 0;
}
