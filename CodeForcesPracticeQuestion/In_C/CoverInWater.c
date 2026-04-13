#include <stdio.h>

int main() 
{
        int t;
        scanf("%d",&t);
        
        while(t--)
        {
            int n;
            scanf("%d",&n);
            
            char str[n+1];
            scanf("%s",str);
            
            int threeSpace=0;
            
            for(int i=2;i<n;i++)
             {
                 if(str[i-2]=='.' && str[i-1]=='.' && str[i]=='.')
                 {
                     threeSpace=1;
                     break;
                 }
             }
             
             if(threeSpace)
              {
                  printf("2\n");
                  continue;
              }
              
              
                  int dotCount=0;
                  
                  for(int i=0;i<n;i++)
                   {
                       if(str[i]=='.')
                        dotCount++;
                   }
              
               printf("%d\n",dotCount);
        } 
       

    return 0;
}
