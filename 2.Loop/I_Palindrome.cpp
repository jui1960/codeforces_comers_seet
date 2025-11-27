#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        cin >> s[i];
    }
    bool ple = true;
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            ple = false;
            break;
        }
        i++;
        j--;
    }

    string r = s;
    reverse(r.begin(), r.end());
    int pos = 0;
    while (pos < r.size() && r[pos] == '0')
    {
        pos++;
    }
    if (pos == r.size())
    {
        cout << 0 << "\n";
    }
    else
        cout << r.substr(pos) << "\n";

    if (ple)
    {

        cout
            << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     string str = s;
//     reverse(s.begin(), s.end());
//     // leading zero বাদ দেওয়া
//     int i = 0;
//     while (i < s.size() && s[i] == '0')
//     {
//         i++;
//     }
//     string reversed = s.substr(i);
 
//     // Output 1st line: reversed number without leading zero
//     cout << reversed << endl;
//     if (s == str)
//     {
//         cout<< "YES";
//     }
//     else
//         cout << "NO";
 
//     return 0;
// }
