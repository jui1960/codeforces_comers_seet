// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>v(n);
//         for (int i = 0; i <n; i++)
//         {
//            cin>>v[i];
//         }
//         sort(v.begin(),v.end());
//         for (int i = 0; i <n; i++)
//         {
//         //    if(v[i]=='0'){
//         //     v[i] = v[i+1];
//         //    }
//            cout<<v[i]<<" ";
//         }
//         cout<<'\n';
        
        
//     }
    

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        bool hasOdd = false, hasEven = false;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                hasEven = true;
            else
                hasOdd = true;
        }

        
        if (hasOdd && hasEven) {
            sort(a.begin(), a.end());
        }

        for (auto x : a)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
