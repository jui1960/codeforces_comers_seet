#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    double rs = 0;

    for (int i = 0; i < n; i++)
    {
        rs += v[i];
    }
    double evarage = rs / n;
    cout << fixed << setprecision(7) << evarage << '\n';

    return 0;
}