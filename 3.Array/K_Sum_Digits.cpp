#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum +=s[i]-48;
        
    }
    cout<<sum<<'\n';
    

    return 0;
}