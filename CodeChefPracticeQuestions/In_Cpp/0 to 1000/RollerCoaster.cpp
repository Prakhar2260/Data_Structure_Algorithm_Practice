#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, H;
        cin >> X >> H;

        if (X >= H)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
