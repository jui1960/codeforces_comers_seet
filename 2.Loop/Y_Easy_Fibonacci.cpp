#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fib1 = 0;
    int fib2 = 1;

    if (n >= 1)
        cout << fib1 << " ";
    if (n >= 2)
        cout << fib2 << " ";

    for (int i = 1; i < n - 1; i++) {
        int fib3 = fib1 + fib2;

        cout << fib3 << " ";

        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}
