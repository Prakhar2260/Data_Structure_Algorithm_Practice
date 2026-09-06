#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> A(N), B(N);

        for (int &x : A) cin >> x;
        for (int &x : B) cin >> x;

        int wins = 0;
        vector<int> cost;

        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) {
                wins++;
            } else {
                cost.push_back(B[i] - A[i] + 1);
            }
        }

        int need = N / 2 + 1;

        if (wins >= need) {
            cout << "YES\n";
            continue;
        }

        sort(cost.begin(), cost.end());

        for (int c : cost) {
            if (wins >= need) break;

            if (X >= c) {
                X -= c;
                wins++;
            } else {
                break;
            }
        }

        cout << (wins >= need ? "YES\n" : "NO\n");
    }

    return 0;
}
