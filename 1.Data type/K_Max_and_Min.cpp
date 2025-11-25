#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int min_ = min({a, b, c});
    int max_ = max({a, b, c});

    cout << min_ << " " << max_;
    return 0;
}