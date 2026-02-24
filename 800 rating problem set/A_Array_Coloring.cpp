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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // value + original index
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], i});
        }

        // sort by value
        sort(v.begin(), v.end());

        // expected parity difference
        int expected = -1;
        bool ok = true;

        for (int rank = 0; rank < n; rank++) {
            int originalIndex = v[rank].second;
            int cur = (originalIndex % 2) ^ (rank % 2);

            if (expected == -1)
                expected = cur;
            else if (cur != expected) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}