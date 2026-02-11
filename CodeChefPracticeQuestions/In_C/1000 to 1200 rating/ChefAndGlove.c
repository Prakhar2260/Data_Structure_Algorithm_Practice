#include <stdio.h>
# include <stdbool.h>

int main() 
{
	// your code goes here
	int T;
    scanf("%d",&T);

    while(T--) 
    {
        int N;
        scanf("%d",&N);
        

        long long L[N],G[N];

        for(int i= 0;i<N;i++)
            scanf("%lld",&L[i]);

        for (int i=0;i<N;i++)
            scanf("%lld",&G[i]);

        bool front=true;
        bool back=true;

        for (int i=0;i<N;i++) 
        {
            if(L[i]>G[i])
                front=false;

            if(L[i]>G[N-1-i])
                back=false;
        }

        if(front && back)
            printf("both\n");
            
        else if(front)
            printf("front\n");
            
        else if(back)
            printf("back\n");
            
        else
            printf("none\n");
    }

    return 0;

}

