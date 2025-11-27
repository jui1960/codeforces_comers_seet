#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
   int prm = 0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0){
            prm++;
        }
    }
    if(prm==2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO"<<'\n';
    }
    
    return 0;
}
