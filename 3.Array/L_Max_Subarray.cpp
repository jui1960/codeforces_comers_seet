#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n <= 3)
        {
 
            for (int i = 0; i < n; i++)
            {
                int mx = a[i];
 
                for (int j = i; j < n; j++)
                {
                    if (a[j] > mx)
                    {
                        mx = a[j];
                    }
                    cout << mx << " ";
                }
            }
        }
        else
        {
            for (int length = 1; length <= n; length++)
            {
                for (int start = 0; start <= n - length; start++)
                {
                    int current_max = a[start];
                    for (int k = start; k < start + length; k++)
                    {
                        if (a[k] > current_max)
                        {
                            current_max = a[k];
                        }
                    }
                    cout << current_max << " ";
                }
            }
        }
        cout<<endl;
    }
 
    return 0;
}