#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int even = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        while (v[i] % 2 == 0)
        {
            v[i]=v[i]/2;
            cnt++;
        }
        even = min(even, cnt);
    }
    cout<<even<<'\n';

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     vector<long long> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     int max_operations = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         int count = 0;
//         long long x = v[i];
//         while (x % 2 == 0) {
//             x /= 2;
//             count++;
//         }
//         max_operations = min(max_operations, count);
//     }

//     cout << max_operations << '\n';
//     return 0;
// }
