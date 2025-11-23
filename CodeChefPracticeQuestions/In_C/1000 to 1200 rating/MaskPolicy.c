#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, A;
        scanf("%d %d", &N, &A);

        int B = N - A;
        int ans = A < B ? A : B;

        printf("%d\n", ans);
    }

    return 0;
}
