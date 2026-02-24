#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long double A, B, C, D;
    cin >> A >> B >> C >> D;

    long double left = B * log(A);
    long double right = D * log(C);

    if (left > right)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}