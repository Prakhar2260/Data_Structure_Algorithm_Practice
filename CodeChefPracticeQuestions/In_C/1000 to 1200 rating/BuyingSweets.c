#include <stdio.h>

int main()
{
	// your code goes here
	
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
        int N,X;
        scanf("%d %d",&N,&X);
        
        int array[N];
        for(int i=0;i<N;i++)
         {
             scanf("%d",&array[i]);
         }
         
         int Sum=0;
         
         for(int i=0;i<N;i++)
         {
             Sum=Sum+array[i];
         }
         
         int K=Sum/X;
         
         if(K==0)
         {
             printf("-1\n");
             continue;
         }
         
         int c=1;
         
         for(int i=0;i<N;i++)
          {
              if((Sum-array[i])/X >=K)
               {
                   c=0;
                   break;
               }
          }
          
          if(c)
          printf("%d\n",K);
          
          else
          printf("-1\n");
         
    }
    
    return 0;
}

