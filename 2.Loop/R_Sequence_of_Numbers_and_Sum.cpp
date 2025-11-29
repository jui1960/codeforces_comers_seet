#include <iostream>
using namespace std;

int main() {

    int n, m;

    while (1) {
        cin >> n >> m;

        if (n <= 0 || m <= 0) {
            break;
        }

        int sum = 0;

        if (n <= m) {
            for (int i = n; i <= m; i++) {
                sum = sum + i;
                cout << i << " ";
            }
            cout << "sum =" << sum << "\n";
        }

        else if (m <= n) {
            for (int i = m; i <= n; i++) {
                sum = sum + i;
                cout << i << " ";
            }
            cout << "sum =" << sum << "\n";
        }
    }

    return 0;
}
