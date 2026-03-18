#include <stdio.h>

int main() 
{
	// your code goes here


   int T;
   scanf("%d",&T);
   
   while(T--)
   {
      int N;
      scanf("%d",&N);
      
      int array[N];
      for(int i=0;i<N;i++)
        scanf("%d",&array[i]);
        
      int ones=0;
      int zeroes=0;
      
      for(int i=0;i<N;i++)
       {
           if(array[i]==1)
            {
                ones++;
            }
            
            else
            {
                zeroes++;
            }
       }
       
       if((N-ones)%2==0)
        {
            printf("YES\n");
        }
        
        else
            printf("NO\n");
   }
   
   return 0;
}

