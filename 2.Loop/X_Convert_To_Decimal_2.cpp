#include <bits/stdc++.h>
using namespace std;

int binary_to_decimal(string s)
{

    int len = s.length(), rs = 0;
    for (int i = 0; i < len; i++)
    {
        rs += pow(2, len - 1 - i);
    }
    return rs;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
                cnt++;
            n /= 2;
        }
        // cout<<cnt<<"\n";
        string binary(cnt, '1');
        // cout << binary << " ";
        int ans = binary_to_decimal(binary);
        cout << ans << '\n';
    }

    return 0;
}