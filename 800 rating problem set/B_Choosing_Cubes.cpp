#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
//#define int long long
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin >> t;
    while(t--){
      int n, f, k;
        cin >> n >> f >> k;
 
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
 
        int fav =v[f-1];
 
        int cnt = 0,cnt2=0;
        for (int x : v) {
            if (x>fav)cnt++;
            else if (x == fav) cnt2++;
        }
 
        if (cnt >= k)
            cout<<"NO\n";
        else if (cnt+cnt2<=k)
            cout<<"YES\n";
        else
            cout<<"MAYBE\n";
    }
    return 0;
}