#include <stdio.h>
int main()
{
    //write your code here
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
    int L,R;
    scanf("%d %d",&L,&R);
    
    int count=0;
    for(int i=L;i<=R;i++)
     {
      
       if( i%10==2 || i%10==3 || i%10==9)
         count++;
         
     }
     
     printf("%d\n",count);
     
    }
    
    return 0;
}
