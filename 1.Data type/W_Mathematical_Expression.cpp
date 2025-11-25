#include <bits/stdc++.h>
using namespace std;
int main()
{

    char s, q;
    int a, b, c;
    cin >> a >> s >> b >> q >> c;

    int result = 0;
    if (s == '+')
    {

        result = a + b;
    }
    if (s == '-')
    {
        result = a - b;
    }

    if (s == '*')
    {
        result = a * b;
    }
    if (result == c)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int a,b,c;
//     char d,e;
//     cin>>a>>d>>b>>e>>c;
//     if(d=='+'){
//         int ans = a+b;
//         if(ans==c) cout<<"Yes\n";
//         else cout<<ans;
//     }
//     else if(d=='-'){
//          int ans = a-b;
//         if(ans==c) cout<<"Yes\n";
//         else cout<<ans;
//     }
//     else{
//          int ans = a*b;
//         if(ans==c) cout<<"Yes\n";
//         else cout<<ans;
//     }
//     return 0;
// }