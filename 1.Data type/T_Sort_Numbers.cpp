#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int a1 = a;
    int b1 = b;
    int c1 = c;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    cout << a << endl
         << b << endl
         << c << endl;
    cout << endl;
    cout << a1 << endl
         << b1 << endl
         << c1;

    return 0;
}