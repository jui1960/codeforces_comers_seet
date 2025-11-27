#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int fact = 1;
        for (int i = 1; i <=n; i++)
        {
            fact *=i; 
        }
        cout<<fact<<'\n';
    }
    
    return 0;
}
