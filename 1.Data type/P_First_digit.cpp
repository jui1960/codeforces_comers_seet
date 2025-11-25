#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int div = x / 1000;
    if (div % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}