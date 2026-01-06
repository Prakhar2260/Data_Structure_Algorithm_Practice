#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        long long V;
        scanf("%d %d %lld", &N, &K, &V);

        long long sum = 0;
        for (int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }

        long long total = V * (N + K);
        long long missing = total - sum;

        if (missing <= 0 || missing % K != 0) {
            printf("-1\n");
        } else {
            printf("%lld\n", missing / K);
        }
    }

    return 0;
}
