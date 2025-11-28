#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while(T--) {
        scanf("%d", &N);
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                printf("1 ");
            }
            printf("\n");
        }
    }
    return 0;
}
