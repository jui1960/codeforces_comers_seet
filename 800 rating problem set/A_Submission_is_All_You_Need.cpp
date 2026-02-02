#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum = 0;
        int cnt=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==0) cnt++;
            sum= sum+a[i];
        }
        
        cout << sum + cnt << "\n";
    }
    return 0;
}