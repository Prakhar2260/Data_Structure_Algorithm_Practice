#include <stdio.h>

int main() 
{
    int T;
    scanf("%d",&T);
    
    while(T--)
    {
     int X,Y;
     scanf("%d %d",&X,&Y);
     
     while(X!=0)
       {
          if(X>Y)
          {
            int temp=X;
            X=Y;
            Y=temp;
          }
          
          else
          {
            int temp=X;
            X=Y%X;
            Y=temp;
          }
          
       }
       
       printf("%d\n",Y);
  
    }
    
    return 0;

}

