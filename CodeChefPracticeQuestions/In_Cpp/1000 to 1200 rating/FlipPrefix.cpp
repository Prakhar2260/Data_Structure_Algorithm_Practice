#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int balance = 0;
        int k = 0;

        for (char c : S) {
            if (c == '1')
                balance++;
            else
                balance--;

            if (balance == 0)
                k++;
        }

        long long ans = 1LL << k;

        cout << ans << '\n';
    }

    return 0;
}
