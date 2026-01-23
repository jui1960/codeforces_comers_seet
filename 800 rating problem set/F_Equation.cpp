#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    int sum = 0;

    for(int i = 0; i <= n; i += 2) {
        int power = 1;
        for(int j = 0; j < i; j++) {
            power *= x; 
        }

        if(i == 0)
            sum += power - 1; 
        else
            sum += power;
    }

    cout << sum << endl;

    return 0;
}
