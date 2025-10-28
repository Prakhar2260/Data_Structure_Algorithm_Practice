#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        // Simple pattern: 1...0...1
        // Works for all N ≥ 3
        printf("1");
        for (int i = 1; i < N - 1; i++)
            printf("0");
        printf("1\n");
    }

    return 0;
}
