#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        long long N,M,K;
        scanf("%lld %lld %lld",&N,&M,&K);

        long long lastDay;
        long long Ai;

        for(int i=0;i<N;i++)
        {
            scanf("%lld",&Ai);
            if(i==N-1)
            {
                lastDay = Ai;
            }
        }
        

        if(M-lastDay+1>= K)
        {
            printf("Yes\n");
        }
        
        
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
