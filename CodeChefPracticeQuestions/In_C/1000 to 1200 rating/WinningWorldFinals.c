#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int M,P;
        scanf("%d %d",&M,&P);

        int byTime=299-M;
        int byPenalty=(1000-P-M)/21;

        int ans=(byTime<byPenalty) ? byTime : byPenalty;

        printf("%d\n", ans);
    }

    return 0;
}
