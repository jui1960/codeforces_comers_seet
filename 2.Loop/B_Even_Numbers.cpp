#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n<2){
        cout<<-1;
    }
    for (int i = 2; i <=n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << '\n';
        }
    }

    return 0;
}
