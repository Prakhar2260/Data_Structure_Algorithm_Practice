#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (4 * X <= 1000)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
