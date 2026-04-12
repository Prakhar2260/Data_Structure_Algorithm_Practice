#include <stdio.h>

int main() 
{
        int n;
        scanf("%d",&n);

       int level=0;
       
       int i=1;
       int sum=0;
       while(1)
       {
           sum=sum+i;
           i++;
           
           if(sum<=n)
            level++;
            
           else
            break;
            
            n=n-sum;
       }
       
       printf("%d\n",level);

    return 0;
}
