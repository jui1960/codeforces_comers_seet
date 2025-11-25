#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int year = 0;
    int month = 0;
    int days = 0;

    if (n >= 365)
    {
        year = n / 365;
        n = n - (365 * year); /* code */
    }
    if (n >= 30)
    {
        month = n / 30;
        n = n - (30 * month);
    }
    if (n >= 1)
    {
        days = n / 1;
    }
    cout << year << " years" << endl
         << month << " months" << endl
         << days << " days";

    return 0;
}