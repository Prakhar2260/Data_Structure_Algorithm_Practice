#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int freq[11] = {0}; // Ai <= 10
        int x;

        for(int i = 0; i < N; i++) {
            scanf("%d", &x);
            freq[x]++;
        }

        int maxFreq = 0;
        for(int i = 1; i <= 10; i++) {
            if (freq[i] > maxFreq)
                maxFreq = freq[i];
        }

        printf("%d\n", N - maxFreq);
    }
    return 0;
}
