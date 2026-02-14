#include <stdio.h>
#include <math.h>

int main()
{
	// your code goes here
   
   int T;
   scanf("%d",&T);
   
   while(T--)
   {
       int N,M,K;
       scanf("%d %d %d",&N,&M,&K);
       
       int value=abs(N-M);
       
        if(K>=value)
            printf("0\n");
            
        else
            printf("%d\n",value-K);
       
       
   }
   
   return 0;
}

