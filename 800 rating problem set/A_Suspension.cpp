#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n, y, r;
        cin >> n >> y >> r;

        int suspended_by_red = r;
        int remaining_players = n - r;
        int suspended_by_yellow = y / 2;

        int extra_suspension = min(remaining_players, suspended_by_yellow);

        cout << suspended_by_red + extra_suspension << endl;
    }

    return 0;
}