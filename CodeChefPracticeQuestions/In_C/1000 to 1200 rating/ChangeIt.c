#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[100];
        int freq[101] = {0};

        for (int i = 0; i < N; i++)
        {
            scanf("%d",&A[i]);
            freq[A[i]]++;
        }

        int maxFreq = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (freq[i] > maxFreq)
                maxFreq = freq[i];
        }

        printf("%d\n", N - maxFreq);
    }

    return 0;
}
