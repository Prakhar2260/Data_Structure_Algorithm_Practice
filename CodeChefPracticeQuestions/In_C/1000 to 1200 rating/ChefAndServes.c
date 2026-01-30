#include <stdio.h>

int main() 
{
	// your code goes here
	
	int T;
    scanf("%d",&T);

    while(T--) 
    {
        long long P1,P2,K;
        scanf("%lld %lld %lld",&P1,&P2,&K);

        long long total=P1+P2;
        long long blocks = total/K;

        if(blocks%2==0)
            printf("CHEF\n");
            
        else
            printf("COOK\n");
    }

    return 0;

}

