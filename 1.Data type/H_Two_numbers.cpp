#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    float fl = floor((float)a / b);
    float cl = ceil((float)a / b);
    float rd = round((float)a / b);

    // float fl= floor((float)a / b);
    // float cl = ceil((float)a / b);
    // float rd = round((float)a / b);
    cout << "floor " << a << " / " << b << " = " << fl << endl;

    cout << "ceil " << a << " / " << b << " = " << cl << endl;
    cout << "round " << a << " / " << b << " = " << rd << endl;
    return 0;
}