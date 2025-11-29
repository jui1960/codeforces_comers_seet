#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int j = 1; j <= T; j++) {

        int X, Y;
        cin >> X >> Y;

        int sum = 0;

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        cout << sum << "\n";
    }

    return 0;
}
