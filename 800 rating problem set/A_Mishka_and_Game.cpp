#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int mishka_total = 0;
    int chris_total = 0;

    for (int i = 0; i < n; i++) {
        int m, c;
        cin >> m >> c;

        if (m > c) {
            mishka_total++;
        } else if (c > m) {
            chris_total++;
        }
    }

    if (mishka_total > chris_total) {
        cout << "Mishka" << endl;
    } else if (chris_total > mishka_total) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}