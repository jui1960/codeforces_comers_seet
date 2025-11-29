#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ster = 1;
    int space = n - 1;

    // Upper part
    for (int i = 0; i < n; i++) {

        for (int k = 1; k <= space; k++) {
            cout << " ";
        }

        for (int j = 1; j <= ster; j++) {
            cout << "*";
        }

        cout << "\n";
        ster += 2;
        space--;
    }

    // Lower part
    int ster_ = (n * 2) - 1;
    int space_ = 0;

    for (int i = 0; i < n; i++) {

        for (int k = 1; k <= space_; k++) {
            cout << " ";
        }

        for (int j = 1; j <= ster_; j++) {
            cout << "*";
        }

        cout << "\n";
        ster_ -= 2;
        space_++;
    }

    return 0;
}
