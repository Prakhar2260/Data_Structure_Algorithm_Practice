#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        char S[N + 1];
        scanf("%s", S);

        int ones = 0;
        int maxZero = 0;
        int currentZero = 0;

        for (int i = 0; i < N; i++) 
        {
            if (S[i] == '1')
            {
                ones++;
                currentZero = 0;
            } 
            
            else
            
            {
                currentZero++;
                if (currentZero > maxZero)
                    maxZero = currentZero;
            }
        }

        printf("%d\n", ones + maxZero);
    }

    return 0;
}
