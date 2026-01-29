#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            s.insert(val);
        }
        int k = s.size();
        if (k == 0) {
            cout << 0 << "\n";
        } else {
            cout << (2 * k - 1) << "\n";
        }
    }
    return 0;
}