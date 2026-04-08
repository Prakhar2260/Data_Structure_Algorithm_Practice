#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int G;
        scanf("%d", &G);

        while(G--)
        {
            int I,N,Q;
            scanf("%d %d %d",&I,&N,&Q);

            int ans;

            if(N%2==0)
            {
               ans=N/2;
            }
            
            else
            {
                if(Q==I)
                    ans=N/2;
                    
                else
                    ans=N/2+1;
            }

            printf("%d\n",ans);
        }
    }

    return 0;
}
