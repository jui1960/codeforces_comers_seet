#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;


    for (int i = 0; i < n; i++) {
        primary_diagonal_sum += a[i][i];
    }


    for (int i = 0; i < n; i++) {
        secondary_diagonal_sum += a[i][n - 1 - i];
    }

    int diff = abs(primary_diagonal_sum - secondary_diagonal_sum);
    cout << diff << endl;

    return 0;
}
