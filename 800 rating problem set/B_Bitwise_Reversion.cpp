#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;

        bool ok = true;

       
        for (int bit = 0; bit < 61; bit++) {
            int bx = (x >> bit) & 1;
            int by = (y >> bit) & 1;
            int bz = (z >> bit) & 1;

            int cnt = bx + by + bz;
            if (cnt == 2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
