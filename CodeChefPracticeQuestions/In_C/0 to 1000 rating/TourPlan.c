#include <stdio.h>

int main()
{
    int X,Y,Z;
    
    scanf("%d %d %d",&X,&Y,&Z);
    
    int cost;
    
    if(Z<=50)
    {
        cost=X;
    } 
    
    else
    {
        cost=X+(Z-50)*Y;
    }
    
    printf("%d\n",cost);
    
    return 0;
}
