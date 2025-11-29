#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int val = n * 4;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= val; j++) {
            if (j % 4 == 0) {
                cout << "PUM\n";
            } else {
                cout << j << " ";
            }
        }
        return 0;
    }
}
