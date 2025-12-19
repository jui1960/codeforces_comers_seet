#include <bits/stdc++.h>
using namespace std;
void ans(int n)
{
    if (n % 2 != 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ans(n);

    return 0;
}