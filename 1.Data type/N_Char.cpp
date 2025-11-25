#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin >> s;
    char val = 0;
    if (s >= 'a' && s <= 'z')
    {
        val = s - 32;
        cout << val;
    }
    else
    {
        val = s + 32;
        cout << val;
    }
    return 0;
}