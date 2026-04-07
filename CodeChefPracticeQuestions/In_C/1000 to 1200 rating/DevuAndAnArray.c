#include <stdio.h>

int cmp(const void *a, const void *b)
 {
     return (*(long long*)a - *(long long*)b);
 }

int main() 
{
	// your code goes here
  
  
   int N,Q;
   scanf("%d %d",&N,&Q);
   
   long long ar[N];
   for(int i=0;i<N;i++)
   {
       scanf("%lld",&ar[i]);
   }
   
   qsort(ar, N, sizeof(long long), cmp);
   
   while(Q--)
   {
       long long x;
       scanf("%lld",&x);
       
       if(N==1)
        {
            if(ar[0]==x)
            {
             printf("Yes\n");
            }
            
            else
            {
                printf("No\n");
            }
            
            continue;
             
        }
       
        int min=ar[0];
        int max=ar[N-1];
        
        if(x>=min && x<=max)
         printf("Yes\n");
         
         else
         printf("No\n");
   }
   
   return 0;
}
