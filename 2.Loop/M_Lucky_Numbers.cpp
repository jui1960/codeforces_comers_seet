#include <bits/stdc++.h>
using namespace std;
bool lucky(int n)
{
    string s = to_string(n);
    for (char c : s)
    {
        if (c != '4' && c != '7')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    bool f = false;

    for (int i = a; i <= b; i++)
    {
        if (lucky(i))
        {
            cout << i << " ";
            f = true;
        }
    }
    if (!f)
    {
        cout << -1;
    }
}
