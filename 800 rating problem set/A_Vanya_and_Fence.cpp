#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > h)
            width += 2;   // bend kore cholbe
        else
            width += 1;   // normal cholbe
    }

    cout << width << endl;
    return 0;
}

