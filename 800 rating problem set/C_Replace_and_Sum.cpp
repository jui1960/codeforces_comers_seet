#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
                a[i]=b[i];
            }
        }
        for(int i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                a[i-1]=a[i];
            }
        }
        vector<long long>prefix(n+1,0);
        prefix[0]=0;
        for(int i=1;i<=n;i++)
        {
            prefix[i]=a[i-1]+prefix[i-1];
        }
        for(int i=0;i<q;i++)
        {
            int l,r;
            cin>>l>>r;
            long long sum=0;
            sum=prefix[r]-prefix[l-1];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}