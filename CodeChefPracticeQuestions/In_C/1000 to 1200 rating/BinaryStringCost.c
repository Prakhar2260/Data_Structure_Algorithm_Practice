#include <stdio.h>

int main()
{
	// your code goes here

    int T;
    scanf("%d",&T);
    
    while(T--)
    {
      int N,X,Y;
      scanf("%d %d %d",&N,&X,&Y);
      
      char s[N+1];
      scanf("%s",s);
      
      int one=0 , zero=0 ;    
      
      for(int i=0;i<N;i++)
        {
          if(s[i]=='0')
            zero++;
            
            else
             one++;
        }
        
        if(zero==0 || one==0)
         {
          printf("0\n");
          continue;
         }
         
         if(X>Y)
         {
           printf("%d\n",Y);  
         }
         
         else
          {
            printf("%d\n",X);      
          }

    }
    
    return 0;
}

