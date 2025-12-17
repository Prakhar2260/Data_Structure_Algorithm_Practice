#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d",&N);

        int freq[N+1];
        
        for(int i=0;i<=N;i++)
            freq[i]=0;

        for (int i = 0; i < N; i++)
        {
            int x;
            scanf("%d",&x);
            freq[x]++;
        }

        int maxFrequency=0;
        for (int i = 1;i<=N;i++)
        {
            if(freq[i]>maxFrequency)
                maxFrequency = freq[i];
        }

        printf("%d\n",N-maxFrequency);
    }

    return 0;
}
