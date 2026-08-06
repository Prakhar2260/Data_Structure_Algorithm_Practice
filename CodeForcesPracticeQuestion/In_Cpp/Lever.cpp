#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int excess = 0;
        for (int i = 0; i < n; i++)
            excess += max(0, a[i] - b[i]);

        cout << excess + 1 << '\n';
    }

    return 0;
}
