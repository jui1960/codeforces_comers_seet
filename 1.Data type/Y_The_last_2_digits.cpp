#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long ans = A % 100;
    ans = (ans * (B % 100)) % 100;
    ans = (ans * (C % 100)) % 100;
    ans = (ans * (D % 100)) % 100;

    if (ans < 10)
        cout << "0" << ans; // ensure 2 digits
    else
        cout << ans;

    return 0;
}