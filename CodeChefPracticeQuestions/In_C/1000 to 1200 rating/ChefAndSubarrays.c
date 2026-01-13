#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        long long A[N];
        for (int i = 0; i < N; i++) 
        {
            scanf("%lld", &A[i]);
        }

        long long ans = 0;

        for (int i = 0; i < N; i++) {
            long long sum = 0;
            long long product = 1;

            for (int j = i; j < N; j++) {
                sum += A[j];
                product *= A[j];

                if (sum == product)
                    ans++;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
