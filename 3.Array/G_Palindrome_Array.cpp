// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     vector<int> b = a; //
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b = a; //

    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    // int b[n];
    // for (int i = 0; i < n; i++)
    // {
    //     b[i] = a[i];
    // }

    // reverse(a, a + n);
    reverse(a.begin(), a.end());
    int ple = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            ple = 1;
            break;
        }
    }
    if (ple == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int i = 0;
//     int j = n - 1;
//     int ple = 0;
//     while (i < j)
//     {
//         if (a[i] != a[j])
//         {
//             ple = 1;
//             break;
//             ;
//         }
//         i++;
//         j--;
//     }
//     if (ple == 0)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
// }