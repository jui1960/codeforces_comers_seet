// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         cin >> x;
//         int flag = 0;
//         sort(v.begin(), v.end());
//         for (int i = 0; i < n; i++)
//         {
//             if (v[i] <= x && v[n - 1] >= x)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 1)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> x;

        sort(v.begin(), v.end());

        if (v[0] <= x && v[n - 1] >= x)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}