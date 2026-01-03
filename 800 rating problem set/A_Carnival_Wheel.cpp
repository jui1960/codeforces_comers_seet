// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

    

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int l, a, b;
        cin >> l >> a >> b;
 
        vector<bool> visited(l, false);
        int pos = a;
        int maxPrize = pos;

        while(!visited[pos]) {
            visited[pos] = true;
            maxPrize = max(maxPrize, pos);
            pos = (pos + b) % l;
        }

        cout << maxPrize << "\n";
    }

    return 0;
}
