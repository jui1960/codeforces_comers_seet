#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int g,c,l;
    cin>>g>>c>>l;
    int mn = min({g,c,l});
    int mx = max({g,c,l});
    if(mx-mn>=10) cout<<"check again\n";
    else{
        int ans = g+c+l;
        int ans1 = mx+mn;
        int rs = ans-ans1;
        cout<<"final "<<rs<<'\n';
    }

    return 0;
}