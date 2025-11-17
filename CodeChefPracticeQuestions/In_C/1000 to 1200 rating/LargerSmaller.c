#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);

        int a, minA = 101, maxA = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &a);
            if (a < minA) minA = a;
            if (a > maxA) maxA = a;
        }

        int ans = maxA - minA - 1;
        if (ans < 0) ans = 0;

        printf("%d\n", ans);
    }
    return 0;
}
