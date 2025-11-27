#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int pass = 1999;
    int n;
    while (cin >> n)
    {
        if (n == pass)
        {
            cout << "Correct" << '\n';
            break;
        }
        else
        {
            cout << "Wrong" << '\n';
        }
    }

    return 0;
}
