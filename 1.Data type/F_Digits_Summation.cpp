#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;

    long long int dig1 = a % 10;
    long long int dig2 = b % 10;

    long long int sum = dig1 + dig2;

    cout << sum;
    return 0;
}