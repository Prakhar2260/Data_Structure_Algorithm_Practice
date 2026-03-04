#include <stdio.h>

int main() 
{
	// your code goes here

   int t;
   scanf("%d",&t);
   
   while(t--)
   {
      int n,m;
      scanf("%d %d",&n,&m);
      
      for(int i=n;i<=m;i++)
       {
           if(i<2)
            continue;

          int factor=1;
          
         for(int j=2;j*j<=i;j++)
          {
              if(i%j==0)
                {
                    factor=0;
                    break;
                }
          }
          
            
            if(factor)
              printf("%d\n",i);
       }
       
       printf("\n");
       
   }   
   
   return 0;
}

