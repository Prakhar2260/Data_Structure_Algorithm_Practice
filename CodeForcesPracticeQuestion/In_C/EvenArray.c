#include <stdio.h>

int main() 
{
    int T;
    scanf("%d",&T);

    while(T--)
     {
        int n;
        scanf("%d",&n);

        int array[n];
        for(int i=0;i<n;i++)
         {
             scanf("%d",&array[i]);
         }
         
         int even=0;
         int odd=0;
         
         for(int i=0;i<n;i++)
          {
              if(array[i]%2==0)
                even++;
                
              else
                odd++;
          }
          int oddpos=n/2;
          int evenpos=(n+1)/2;
          
          if(even==evenpos && odd==oddpos)
           {
              int wrongeven=0;
              int wrongodd=0;
              
              for(int i=0;i<n;i++)
               {
                   if(i%2==0 && array[i]%2 !=0)
                    {
                        wrongeven++;
                    }
                    
                    else if(i%2 !=0 && array[i]%2==0)
                     {
                         wrongodd++;
                     }
               }
               
               if(wrongeven==wrongodd)
                {
                    printf("%d\n",wrongeven);
                }
                
                else
                {
                    printf("-1\n");
                }
                    
           }
           
           else
            printf("-1\n");
    }

    return 0;
}
