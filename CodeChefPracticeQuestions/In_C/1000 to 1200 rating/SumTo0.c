#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        if (N == 1) {
            printf("-1\n");
            continue;
        }

        // Even N: alternate 1, -1
        if (N % 2 == 0) {
            for (int i = 0; i < N; i++) {
                if (i % 2 == 0)
                    printf("1 ");
                else
                    printf("-1 ");
            }
            printf("\n");
        } 
        // Odd N: use pairs + [1, 2, -3]
        else {
            for (int i = 0; i < N - 3; i++) {
                if (i % 2 == 0)
                    printf("1 ");
                else
                    printf("-1 ");
            }
            printf("1 2 -3\n");
        }
    }

    return 0;
}
