#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum = (n * (n + 1)) / 2;
    }
    cout << sum;

    return 0;
}
